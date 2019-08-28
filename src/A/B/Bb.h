#pragma once

#include <string>
#include <ostream>

class Bb {
public:
    Bb();
    friend std::ostream &operator<<(std::ostream &os, const Bb &ba);
    void sleep(int sec);

private:
    std::string id;
};
