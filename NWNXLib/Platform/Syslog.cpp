#include "Platform/Syslog.hpp"

#ifdef _WIN32
    #include <windows.h>
#else
    #include <syslog.h>
#endif

#include <algorithm>

namespace NWNXLib {

namespace Platform {

namespace Syslog {

void Emit(const Services::LogSeverity sev, std::string pn, const std::string& message)
{
    std::transform(std::begin(pn), std::end(pn), std::begin(pn), ::tolower);

#ifdef _WIN32
    std::string output = "[" + std::to_string(static_cast<int>(sev)) + "] " + message;
    OutputDebugStringA(output.c_str());
#else
    // We reopen for every message because we reset the progname depending
    // on the passed-in params. We also can't know what else inside
    // the process is messing with the syslog library.
    openlog(pn.c_str(), LOG_CONS | LOG_NDELAY, LOG_USER);
    syslog(static_cast<int>(sev), "%s", message.c_str());
    closelog();
#endif
}

}

}

}
