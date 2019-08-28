#pragma once

#include <string>
#include <ostream>

class Ba {
public:
    Ba();
    friend std::ostream &operator<<(std::ostream &os, const Ba &ba);

private:
    std::string id;
    int *value;
};
