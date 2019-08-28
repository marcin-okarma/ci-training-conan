#pragma once

#include <string>
#include <ostream>

#include "Ba.h"
#include "VersionInterface.h"

class A : public Ba , public VersionInterface {
public:
    A();

    friend std::ostream &operator<<(std::ostream &os, const A &a);

    virtual std::string getVersion();

private:
    std::string id;
};
