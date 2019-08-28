#include "D.h"
#include "H.h"

D::D(C c, Bb b): _c(c), _b(b) {

}

std::string D::getVersion() {
    return getAppVersion();
}

