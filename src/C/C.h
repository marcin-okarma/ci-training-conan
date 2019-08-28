#pragma once

#include "VersionInterface.h"

class C : public VersionInterface {
public:
    C();
    virtual std::string getVersion();
private:
    std::string id;
};

