#include <iostream>
#include <vector>
#include <cmath>
#include <string>

std::vector<double> solve_quadratic(double a, double b, double c) {
    // linear
    if (a == 0.0) {
        //-c/b
        if (b == 0) return {};
        return {-(c/b)};
    }

    // radicle is zero, one root
    double radicle = (pow(b, 2) - (4 * a * c));
    if (std::isnan(radicle) || radicle < 0.0) {
        return {};
    }
    if (radicle == 0.0) {
        return {-b/(2*a)};
    }

    
    double one = (-b + sqrt(radicle))/(2*a); // (-b + sqrt(b^2-4ac)) / 2a
    double two = (-b - sqrt(radicle))/(2*a); // (-b - sqrt(b^2-4ac)) / 2a

    return {one, two};
}

void print_roots(std::vector<double>& roots) {
    for (double root : roots) {
        std::cout << root << std::endl;
    }
}

std::vector<double> ask_values() {
    std::string num;
    std::vector<double> values{};

    std::cout << "Please enter a, b, and c:" << std::endl;

    getline(std::cin, num);
    double value1 = std::stod(num);
    //std::cout << "a: " << value1 << std::endl;
    getline(std::cin, num);
    double value2 = std::stod(num);
    //std::cout << "b: " << value2 << std::endl;
    getline(std::cin, num);
    double value3 = std::stod(num);
    //std::cout << "c: " << value3 << std::endl;

    values.push_back(value1);
    values.push_back(value2);
    values.push_back(value3);
    
    return values;
}

int main() {
    std::vector<double> test{};

    while(true) {
        test = ask_values();
        double a = test.at(0);
        double b = test.at(1);
        double c = test.at(2);
        print_roots(solve_quadratic(a, b, c));
    }

    return 0;
}