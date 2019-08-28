
#include "Bb.h"
#include "H.h"
#include <chrono>
#include <thread>

Bb::Bb() : id("Bb") {

}

std::ostream &operator<<(std::ostream &os, const Bb &bb) {
    os << "Obj id: " << bb.id << " from app: " << appName;
    return os;
}

void Bb::sleep(int sec) {
    std::this_thread::sleep_for(std::chrono::seconds(sec));
}
