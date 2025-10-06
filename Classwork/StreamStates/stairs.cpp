#include <iostream>
#include <limits>

int main() {
    std::cout << "Please provide a number of lines to print the stair-case pattern: ";
    unsigned int no_lines;
    std::cin >> no_lines;

    // TODO(student): handle invalid input:
    //                * reset the stream back to good
    //                  * clear the stream state
    //                  * clear the buffer
    //                * re-prompt
    //                until input is valid

    while (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "Error: Invalid Input. Please provide a --> NUMBER <-- of lines to print the stair-case pattern: ";
        std::cin >> no_lines;
    }

    for (unsigned int i = 1; i <= no_lines ; ++i) {
        for (unsigned int j = 1 ; j <= i ; ++j) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
    return 0;
}
