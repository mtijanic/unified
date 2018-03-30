#pragma once

#include "API/Version.hpp"

#ifdef _WIN32
    #include "API/FunctionsWindows.hpp"
#else
    #include "API/FunctionsLinux.hpp"
#endif
