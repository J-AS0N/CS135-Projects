/* 
Author: Jason Weng
Course: CSCI 135
Instructor: Genady Maryash
Assignment: Project 3, Task 2 (Starting an Account) 
This program will check the user's account number/pin number and allow them to deposit and withdraw money 
*/
#include "Bank.hpp" // everything in your 'hpp' file will be included in this 'cpp' file

Bank::Bank() {
    total_account = 0;
}

std::string Bank::createAccount(std::string first_name, std::string last_name, std::string pin_number) {
    if (total_account < 200) {
            Accounts[total_account] = Account(first_name, last_name, pin_number);
            total_account++;
            return Accounts[total_account -1].getAccountNumber();
        }
    return "-1";
}

bool Bank::removeAccount(std::string account_number) {
    for (int i = 0; i < total_account; i++) {
        if (Accounts[i].getAccountNumber() == account_number) {
            for (int j = i; j < total_account -1; j++) {
                Accounts[j] = Accounts[j+1];
            }
            total_account--;
            return true;
        }
    }
    return false;
}

bool Bank::withdraw(int amount, std::string account_number, std::string pin_number) {
    for (int i = 0; i < total_account; i++) {
        if (Accounts[i].getAccountNumber() == account_number && pin_number == Accounts[i].getPin()) {
            return Accounts[i].transaction(amount * -1);
        }
    }
    return false;
}

bool Bank::deposit(int amount, std::string account_number, std::string pin_number) {
    for (int i = 0; i < total_account; i++) {
        if (Accounts[i].getAccountNumber() == account_number && pin_number == Accounts[i].getPin()) {
            return Accounts[i].transaction(amount);
        }
    }
    return false; 
}

int Bank::getAccountBalance(std::string account_number, std::string pin_number) {
    for (int i = 0; i < total_account; i++) {
        if (Accounts[i].getAccountNumber() == account_number && pin_number == Accounts[i].getPin()) {
            return Accounts[i].getBalance();
        }
    }
    return -1;
}