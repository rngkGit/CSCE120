#include <iostream>
#include <string>

// replace all vowels in the input string with "#"
std::string replace_vowels(std::string str) {
    // ~ObjOri

    // TODO(student)
    // find the position of the first vowel
    std::string vowels = "aeiouAEIOU";
    size_t pos = str.find_first_of(vowels);
    // while a vowel was found
    while (pos != std::string::npos) {
        // replace the vowel with "#"
        str.replace(pos, 1, "#");
        // find the position of the next vowel
        pos = str.find_first_of(vowels);
    }
    // end-while
    return str;
}

// prompts the user for input and returns a string containing the user's response
std::string input(std::string prompt) {
    std::cout << prompt;
    std::string line;
    std::getline(std::cin, line);
    return line;
}

int main() {
    // imperitive
    std::string line = input("Enter a line of text:\n");
    std::string line_no_vowels = replace_vowels(line);
    std::cout << "before: " << line << std::endl;
    std::cout << " after: " << line_no_vowels << std::endl;

    return 0;
}