// collatz.cpp
#include <iostream>
#include <vector>

// do not define main

// returns a vector containing the collatz sequence of n
std::vector<unsigned> collatz(unsigned n) {
    // TODO(student)
    std::vector<unsigned> returnVector;

    returnVector.push_back(n);

    while(returnVector.back() != 1) {
        if (returnVector.back() % 2 == 0) {
            returnVector.push_back(returnVector.back() / 2);
        } else {
            returnVector.push_back(returnVector.back() * 3 + 1);
        }
    }

    return returnVector;
}

// prints the square bracketed, comma-separated contents of the vector to standard output
void print_vector(const std::vector<unsigned>& v) {
    // TODO(student)
    std::cout << "[";
    for (int i = 0; i < v.size()-1; i++) {
        std::cout << v.at(i) << ",";
    }
    if (v.size() > 0) {
        std::cout << v.back();
    }
    std::cout << "]" << std::endl;
}

// do not define main
