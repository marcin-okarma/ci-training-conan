#pragma once

#include <string>

class VersionInterface {
public:
    virtual std::string getVersion() = 0;
    ~VersionInterface() {}
};