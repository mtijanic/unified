#include "NWNXCore.hpp"
#include <memory>
#include <windows.h>

std::unique_ptr<Core::NWNXCore> g_hook;

BOOL WINAPI DllMain(HINSTANCE inst, DWORD fdwReason, LPVOID)
{
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
            // We hold the loader lock here, so any initialization that calls APIs
            // that acquire it will need to be deferred. See the Tasks service.
            g_hook = std::make_unique<Core::NWNXCore>();
            break;

        case DLL_PROCESS_DETACH:
            g_hook.reset();
            break;
    }

    return true;
}
