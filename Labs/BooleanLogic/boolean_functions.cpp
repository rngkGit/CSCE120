#include <iostream>
#include "boolean_functions.h"

void printNOT() {
    // TODO(student): replace ?s with 0 or 1
    std::cout << "--- printNOT ---" << std::endl;

    std::cout << " x | NOT x" << std::endl;
    std::cout << "---+-------" << std::endl;
    std::cout << " 0 |   1" << std::endl;
    std::cout << " 1 |   0" << std::endl;

    std::cout << std::endl;
}

void printOR() {
    // TODO(student): replace ?s with 0 or 1
    std::cout << "--- printOR ---" << std::endl;

    std::cout << " x | y | x OR y" << std::endl;
    std::cout << "---+---+--------" << std::endl;
    std::cout << " 0 | 0 |   0" << std::endl;
    std::cout << " 0 | 1 |   1" << std::endl;
    std::cout << " 1 | 0 |   1" << std::endl;
    std::cout << " 1 | 1 |   1" << std::endl;

    std::cout << std::endl;
}

void printAND() {
    // TODO(student): replace ?s with 0 or 1
    std::cout << "--- printAND ---" << std::endl;

    std::cout << " x | y | x AND y" << std::endl;
    std::cout << "---+---+---------" << std::endl;
    std::cout << " 0 | 0 |    0" << std::endl;
    std::cout << " 0 | 1 |    0" << std::endl;
    std::cout << " 1 | 0 |    0" << std::endl;
    std::cout << " 1 | 1 |    1" << std::endl;

    std::cout << std::endl;
}

void printXOR() {
    // TODO(student): replace ?s with 0 or 1
    std::cout << "--- printXOR ---" << std::endl;

    std::cout << " x | y | x XOR y" << std::endl;
    std::cout << "---+---+---------" << std::endl;
    std::cout << " 0 | 0 |    0" << std::endl;
    std::cout << " 0 | 1 |    1" << std::endl;
    std::cout << " 1 | 0 |    1" << std::endl;
    std::cout << " 1 | 1 |    0" << std::endl;

    std::cout << std::endl;
}

bool booleanLogic1(bool x, bool y, bool z) {
    std::cout << "--- booleanLogic1 ---" << std::endl;

    //bool value = false; // TODO(student): write a boolean expression for x OR y OR z
    bool value = x || y || z;
    std::cout << std::boolalpha << x << " OR " << y << " OR " << z << " = " << value << std::endl;

    std::cout << std::endl;
    return value;
}

bool booleanLogic2(bool x, bool y, bool z) {
    std::cout << "--- booleanLogic2 ---" << std::endl;

    //bool value = false; // TODO(student): write a boolean exppression for x AND y AND z
    bool value = x && y && z;
    std::cout << std::boolalpha << x << " AND " << y << " AND " << z << " = " << value << std::endl;

    std::cout << std::endl;
    return value;
}

bool booleanLogic3(bool x, bool y, bool z) {
    std::cout << "--- booleanLogic3 ---" << std::endl;

    //bool value = false; // TODO(student): write a boolean expression for x XOR y XOR z
    bool value = x ^ y ^ z;
    std::cout << std::boolalpha << x << " XOR " << y << " XOR " << z << " = " << value << std::endl;

    std::cout << std::endl;
    return value;
}

unsigned int countLetters(std::string str) {
    // this function should count the number of letters in a string
    // TODO(student): find and fix the error

    // For the professor: I didn't change anything and I don't see anything wrong..
    // For note: I am running Apple clang version 17.

    // I see. In the document it talks about how functions seem to output boolean but they actually output integers.

    std::cout << "--- countLetters ---" << std::endl;

    unsigned int count = 0;
    for (unsigned int i=0; i<str.size(); ++i) {
        if (isalpha(str.at(i)) != 0) {
            count++;
        }
    }
    return count;
}

bool f(bool x, bool y, bool z) {
    // this function should implement the mystery function
    std::cout << "--- f ---" << std::endl;

    //bool boolVal = false; // TODO(student): write a boolean expression for the mystery function
    bool boolVal = (x && !(y ^ z)) || (!x && (y || z)); // works.. I could use De Morgans law.. oh welp.

    return boolVal;
}

void setAssignments(bool &w, bool &x, bool &y, bool &z) {
// You'll learn what the & means in the function signature later this semester
    std::cout << "--- setAssignments ---" << std::endl;

    // TODO(student): Assign boolean values the four variables so that
    //                the boolean formula evaluates to true.
    //                You ONLY need to assign the values to the variables.
    w = true;
    x = true;
    y = false;
    z = false;
}
