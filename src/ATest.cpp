#include <iostream>
#include "A.h"
#include "C.h"
#include "D.h"

int main() {
    A a;
    C c;
    D d(c, Bb());
    std::cout << a << "\n";

    if(a.getVersion() != "release") {
        std::cout << "TEST FAILED\n";
        return -1;
    }
    else {
        std::cout<<"TEST PASSED\n";
    }

    return 0;
}
