// add more includes as necessary
#include "functions.h"

// deobfuscate a sentence
// arg 1: obfuscated sentence
// arg 2: deobfuscation details
// returns the deobfuscated sentence
std::string deobfuscate(const std::string& ob, const std::string& details) {
    // TODO(student)
    std::string deob = ob;

    int index = 0;

    for (int i = 0; i < details.length()-1; ++i) {
        index += details.substr(i).at(0)-48;
        deob.insert(index, " ");
        ++index; // Because we added a space :P
    }

    return deob;
}

// replace filter word with octothorpes (#)
// arg 1: sentence
// arg 2: filter word
// returns the filtered sentence
std::string wordFilter(const std::string& word, const std::string& filter) {
    // TODO(student)
    std::string newWord = word;

    int pos = newWord.find(filter);

    while (pos != std::string::npos) {
        for (int i = 0; i < filter.length(); ++i) {
            newWord.replace(pos+i, 1, "#");
        }

        pos = newWord.find(filter);
    }

    return newWord;
}

// convert a string to a secure password
// arg 1: text
// returns a secure password based on the text
std::string passwordConverter(const std::string& text) {
    // TODO(student)
    std::string password = text;

    for (int i = 0; i < text.length(); ++i) {
        switch (text.substr(i).at(0)) {
            case 'a': // a
                password.replace(password.find_first_of('a'), 1, "@");
                break;
            case 'e': // e
                password.replace(password.find_first_of('e'), 1, "3");
                break;
            case 'i': // i
                password.replace(password.find_first_of('i'), 1, "!");
                break;
            case 'o': // o
                password.replace(password.find_first_of('o'), 1, "0");
                break;
            case 'u': // u
                password.replace(password.find_first_of('u'), 1, "^");
                break;
        }
    }

    std::string backwards = password;
    for (int i = text.length(); i > 0; --i) {
        password.append(1, backwards.at(i-1));
    }

    return password;
}

// calculate the result of an arithmetic expression in words
// arg 1: expression using words
// returns an arithmetic equation using numerals and arithmetic symbols
std::string wordCalculator(const std::string&) {
    // TODO(student)
    return "";
}

// count the palindromes in the text
// arg 1: text
// returns the number of palindromes in the text
unsigned int palindromeCounter(const std::string&) {
    // TODO(student)
    return 0;
}
