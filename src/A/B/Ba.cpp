
#include "Ba.h"
#include "H.h"

Ba::Ba() : id("Ba"), value(new int(4)) {
    value = new int[10];
}

std::ostream &operator<<(std::ostream &os, const Ba &ba) {
    os << "Obj id: " << ba.id << " from app: " << appName << " with value: " << *ba.value;
    return os;
}
