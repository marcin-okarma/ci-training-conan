#include "C.h"
#include <iostream>

int main() {
    C c;
    if(c.getVersion() != "testing") {
        std::cout << "TEST FAILED\n";
        return -1;
    }
    else {
        std::cout<<"TEST PASSED\n";
    }
    return 0;
}