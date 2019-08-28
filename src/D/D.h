#pragma once

#include "C.h"
#include "Bb.h"
#include "VersionInterface.h"

class D : public VersionInterface {
public:
    D(C c, Bb b);

    virtual std::string getVersion();

private:
    C _c;
    Bb _b;
};
