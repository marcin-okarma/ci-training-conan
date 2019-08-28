#include "D.h"
#include <iostream>

int main() {
    D d((C()), Bb());
    if(d.getVersion() != "active") {
        std::cout << "TEST FAILED\n";
        return -1;
    }
    else {
        std::cout<<"TEST PASSED\n";
    }
    return 0;
}