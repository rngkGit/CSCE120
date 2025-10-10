#include <iostream>
#include <string>
#include "bankaccount.h"

int main() {
    BankAccount bank1;
    std::cout << "Bank Account # " << bank1.get_accountNumber() << std::endl;
    std::cout << "Account Name: " << bank1.get_name() << std::endl;
    std::cout << "Account Balance: " << bank1.get_balance() << std::endl;
    return 0;
}