#pragma once

#include <string>

const std::string appName = "cmake_training";

inline std::string getAppVersion() {
#ifdef Clib_USER
    return "active";
#elif Clib_INNER
    return "testing";
#else
    return "release";
#endif
}