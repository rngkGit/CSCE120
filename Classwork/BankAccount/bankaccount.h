#ifndef _BANKACCOUNT_
#define _BANKACCOUNT_

#include <string>

class BankAccount {
    private:
        unsigned int accountNumber;
        std::string name;
        int balance;

    public:
        BankAccount();
        void set_name(const std::string& newName);
        unsigned int get_accountNumber() const;
        std::string get_name() const;
        int get_balance() const;
        bool deposit(int amount);
        bool withdraw(int amount);
};

#endif