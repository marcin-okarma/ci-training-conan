#include "A.h"
#include "H.h"

std::ostream &operator<<(std::ostream &os, const A &a) {
    os << "Obj id: " << a.id << " from app: " << appName
       << " and child of \"" << (Ba) a << "\"";
    return os;
}

A::A() : id("A") {

}

std::string A::getVersion() {
    return getAppVersion();
}
