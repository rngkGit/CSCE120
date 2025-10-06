// main.cpp
#include <vector>
#include "collatz.h"

int main() {
    std::vector<unsigned> v = collatz(1);
    print_vector(v);
    return 0;
}