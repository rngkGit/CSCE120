#include <string>
#include "bankaccount.h"

BankAccount::BankAccount() {
    accountNumber = 169238;
    name = "John Doe";
    balance = 0;
}

void BankAccount::set_name(const std::string& newName) {
    name = newName;
}

unsigned int BankAccount::get_accountNumber() const {
    return accountNumber;
}

std::string BankAccount::get_name() const {
    return name;
}

int BankAccount::get_balance() const {
    return balance;
}

bool BankAccount::deposit(int amount) {
    if (amount <= 0) {
        return false;
    }
    balance += amount;
    return true;
}

bool BankAccount::withdraw(int amount) {
    if (amount <= 0) {
        return false;
    }
    if (amount > balance) {
        return false;
    }
    balance -= amount;
    return true;
}