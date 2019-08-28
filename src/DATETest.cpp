#include <iostream>
#include <ctime>
#include <sstream>
#include "DATE/BuildTime.h"

int main() {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    std::stringstream ss;
    ss<<1900 + ltm->tm_year << "-0"<<1 + ltm->tm_mon<<"-"<<ltm->tm_mday;
    if(BUILD_TIME != ss.str()){
        std::cout << "TEST FAILED: "<<BUILD_TIME<<" != "<<ss.str()<<"\n";
        return -1;
    }
    else {
        std::cout<<"TEST PASSED\n";
    }
    return 0;
}