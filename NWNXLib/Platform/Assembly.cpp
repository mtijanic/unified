#include "Platform/Assembly.hpp"
#include "External/BeaEngine/include/BeaEngine.h"
#include <cassert>
#include <cstring>

namespace {

uintptr_t CalculateRelativeAddress(const uintptr_t from, const uintptr_t to, const uintptr_t instSize)
{
    return to + (0xFFFFFFFF - (from + instSize)) + 1;
}

}

namespace NWNXLib {

namespace Platform {

namespace Assembly {

std::vector<uint8_t> AddRegImmByteInstruction::ToBytes(const uintptr_t) const
{
    const uint8_t opcode = 0x83; // ADD r32, imm8
    const uint8_t extended = 0xC0 + static_cast<uint8_t>(m_register);
    return { opcode, extended, m_value };
}

std::vector<uint8_t> AddRegImmDwordInstruction::ToBytes(const uintptr_t) const
{
    const uint8_t opcode = 0x81; // ADD r32, imm32
    const uint8_t extended = 0xC0 + static_cast<uint8_t>(m_register);
    std::vector<uint8_t> encoded;
    encoded.resize(6);
    encoded[0] = opcode;
    encoded[1] = extended;
    memcpy(encoded.data(), &opcode, 1);
    memcpy(encoded.data() + 1, &extended, 1);
    memcpy(encoded.data() + 2, &m_value, 4);
    return encoded;
}

std::vector<uint8_t> CallRelInstruction::ToBytes(const uintptr_t address) const
{
    const uint8_t opcode = 0xE8; // CALL near relative
    std::vector<uint8_t> encoded;
    encoded.resize(5);
    const uintptr_t relAddress = CalculateRelativeAddress(address, m_address, 5);
    memcpy(encoded.data(), &opcode, 1);
    memcpy(encoded.data() + 1, &relAddress, 4);
    return encoded;
}

std::vector<uint8_t> JmpRelInstruction::ToBytes(const uintptr_t address) const
{
    const uint8_t opcode = 0xE9; // JMP near relative
    std::vector<uint8_t> encoded;
    encoded.resize(5);
    const uintptr_t relAddress = CalculateRelativeAddress(address, m_address, 5);
    memcpy(encoded.data(), &opcode, 1);
    memcpy(encoded.data() + 1, &relAddress, 4);
    return encoded;
}

std::vector<uint8_t> MovRegRegInstruction::ToBytes(const uintptr_t) const
{
    const uint8_t opcode = 0x89; // MOV r32, r32
    const uint8_t extended = 0xC0 + static_cast<uint8_t>(m_destination) + (static_cast<uint8_t>(m_source) * 8);
    return { opcode, extended };
}

std::vector<uint8_t> MovRegRegMemInstruction::ToBytes(const uintptr_t) const
{
    const uint8_t opcode = 0x8B; // MOV r32, r/m32
    const uint8_t extended = (static_cast<uint8_t>(m_destination) * 8) + static_cast<uint8_t>(m_source);
    return { opcode, extended };
}

std::vector<uint8_t> NoopInstruction::ToBytes(const uintptr_t) const
{
    const uint8_t opcode = 0x90; // NOOP
    return { opcode };
}

std::vector<uint8_t> PushImmInstruction::ToBytes(const uintptr_t) const
{
    const uint8_t opcode = 0x68; // PUSH imm32
    std::vector<uint8_t> encoded;
    encoded.resize(5);
    memcpy(encoded.data(), &opcode, 1);
    memcpy(encoded.data() + 1, &m_value, 4);
    return encoded;
}

std::vector<uint8_t> PopRegInstruction::ToBytes(const uintptr_t) const
{
    const uint8_t opcode = 0x58 /* PUSH r32 */ + static_cast<uint8_t>(m_register);
    return { opcode };
}

std::vector<uint8_t> PushRegInstruction::ToBytes(const uintptr_t) const
{
    const uint8_t opcode = 0x50 /* PUSH r32 */ + static_cast<uint8_t>(m_register);
    return { opcode };
}

std::vector<uint8_t> PushRegMemByteInstruction::ToBytes(const uintptr_t) const
{
    const uint8_t opcode = 0xFF; // PUSH r/m32
    const uint8_t extended = 0x70 + static_cast<uint8_t>(m_register);
    return { opcode, extended, *reinterpret_cast<const uint8_t*>(&m_offset) };
}

std::vector<uint8_t> PushRegMemDwordInstruction::ToBytes(const uintptr_t) const
{
    const uint8_t opcode = 0xFF; // PUSH r/m32
    const uint8_t extended = 0xB0 + static_cast<uint8_t>(m_register);
    std::vector<uint8_t> encoded;
    encoded.resize(6);
    memcpy(encoded.data(), &opcode, 1);
    memcpy(encoded.data() + 1, &extended, 1);
    memcpy(encoded.data() + 2, &m_offset, 4);
    return encoded;
}

std::vector<uint8_t> RetInstruction::ToBytes(const uintptr_t) const
{
    const uint8_t opcode = 0xC3; // RET
    return { opcode };
}

std::vector<uint8_t> SubRegImmByteInstruction::ToBytes(const uintptr_t) const
{
    const uint8_t opcode = 0x83; // SUB r32, imm8
    const uint8_t extended = 0xE8 + static_cast<uint8_t>(m_register);
    return { opcode, extended, m_value };
}

std::vector<uint8_t> SubRegImmDwordInstruction::ToBytes(const uintptr_t) const
{
    const uint8_t opcode = 0x81; // SUB r32, imm32
    const uint8_t extended = 0xE8 + static_cast<uint8_t>(m_register);
    std::vector<uint8_t> encoded;
    encoded.resize(6);
    memcpy(encoded.data(), &opcode, 1);
    memcpy(encoded.data() + 1, &extended, 1);
    memcpy(encoded.data() + 2, &m_value, 4);
    return encoded;
}

void CorrectRelativeAddresses(const uintptr_t address, const uintptr_t originalAddress, const uintptr_t length)
{
    assert(length > 0);

    DISASM disassembler = {};
    disassembler.EIP = address;
    disassembler.VirtualAddr = originalAddress;

    uintptr_t bytesChecked = 0;

    while (bytesChecked < length)
    {
        const int len = Disasm(&disassembler);

        if (len == OUT_OF_BLOCK || len == UNKNOWN_OPCODE || len < 0)
        {
            break;
        }

        const uintptr_t lengthChecked = static_cast<uintptr_t>(len);

        static constexpr uint8_t RELATIVE_CALL = 0xE8;
        static constexpr uint8_t RELATIVE_SHORT_JMP = 0xEB;
        static constexpr uint8_t RELATIVE_JMP = 0xE9;

        switch (disassembler.Instruction.Opcode)
        {
            case RELATIVE_CALL:
            case RELATIVE_JMP:
            {
                uint32_t* offsetAddr = reinterpret_cast<uint32_t*>(address + bytesChecked + 1);
                uintptr_t originalOffset;
                memcpy(&originalOffset, offsetAddr, 4);
                const uintptr_t targetAddress = originalAddress + bytesChecked + lengthChecked + originalOffset;
                const uintptr_t trampolineAddress = address + bytesChecked + lengthChecked;
                const uintptr_t newAddress = targetAddress + (0xFFFFFFFF - trampolineAddress) + 1;
                memcpy(offsetAddr, &newAddress, 4);
                break;
            }

            case RELATIVE_SHORT_JMP:
            {
                assert(false); // No short jmp support yet!
                break;
            }
        }

        bytesChecked += lengthChecked;
        disassembler.EIP += lengthChecked;
        disassembler.VirtualAddr += lengthChecked;
    }
}

uintptr_t GetSmallestLengthToFitInstruction(const uintptr_t address, const uintptr_t instLen)
{
    assert(instLen > 0);

    DISASM disassembler = {};
    disassembler.EIP = address;

    uintptr_t bytesChecked = 0;

    while (true)
    {
        const int len = Disasm(&disassembler);

        if (len == OUT_OF_BLOCK || len == UNKNOWN_OPCODE || len < 0)
        {
            return 0;
        }

        const uintptr_t lengthChecked = static_cast<uintptr_t>(len);

        bytesChecked += lengthChecked;

        if (bytesChecked >= instLen)
        {
            return bytesChecked;
        }

        disassembler.EIP += lengthChecked;
    }
}

}

}

}
