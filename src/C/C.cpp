#include "C.h"
#include "H.h"

C::C(): id("C") {

}

std::string C::getVersion() {
    return getAppVersion();
}
