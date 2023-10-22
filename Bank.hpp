/*
Author: Jason Weng
Course: CSCI 135
Instructor: Genday Maryash
Assignment: Project 3, Task 2 (Starting an Account)
This is a hpp file
*/

#include <iostream>
#include <string>
#include "Account.hpp"
#ifndef BANK_HPP // guards ~ prevents re-definition of the same functions
#define BANK_HPP // Capitalize the letters (for some reason :/ )

class Bank {
    public:
    Bank();
    std::string createAccount(std::string first_name, std::string last_name, std::string pin_number);
    bool removeAccount(std::string account_number);
    bool withdraw(int amount, std::string account_number, std::string pin_number);
    bool deposit(int amount, std::string account_number, std::string pin_number);
    int getAccountBalance(std::string account_number, std::string pin_number);

    private:
    int total_account;
    Account Accounts[200];

};
#endif