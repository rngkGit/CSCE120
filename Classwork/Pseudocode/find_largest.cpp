// To find the largest values:

// Note: Assume finding lagrest of 3 values given

// Import necessairy libraries
#include <iostream>

int main() {
    // Read first value and assign to variable
    double firstValue;
    std::cin >> firstValue;
        // If value is malformed, return error code 1 (incorrect input submitted)
    if (std::cin.fail()) {
        std::cout << "ERROR: Invalid input." << std::endl;
        return 1;
    }

    // Read second value and assign to a second variable
    double secondValue;
    std::cin >> secondValue;
        // If value is malformed, return error code 1 (incorrect input submitted)
    if (std::cin.fail()) {
        std::cout << "ERROR: Invalid input." << std::endl;
        return 1;
    }

    // Read third value and assign to a third variable
    double thirdValue;
    std::cin >> thirdValue;
        // If value is malformed, return error code 1 (incorrect input submitted)
    if (std::cin.fail()) {
        std::cout << "ERROR: Invalid input." << std::endl;
        return 1;
    }

    // Write an if statement to compare the first and second values
        // If the first value is greater than the second value, then assign the first value to the second variable
    if (firstValue > secondValue) {
        secondValue = firstValue;
    }
        // If the second value is greater than the first value, then assign the second value to the first variable (potentially redundant, but for clarity)
    /*if (secondValue > firstValue) {
        firstValue = secondValue;
    }*/

    // Write an if statement to compare the second and third values
        // If the second value is greater than the third value, then assign the second value to the third variable
    if (secondValue > thirdValue) {
        thirdValue = secondValue;
    }
        // If the third value is greater than the second value, then assigned the third value to the second variable (potentially redundant as well, but again for clarity)
    /*if (thirdValue > secondValue) {
        secondValue = thirdValue;
    }*/

    // Print out the third value, the largest value.
    std::cout << "The largest number of the three is: " << thirdValue << std::endl;

    // End code
    return 0;
}