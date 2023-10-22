/* 
Author: Jason Weng
Course: CSCI 135
Instructor: Genady Maryash
Assignment: Project 3, Task 1 (Opening an Account) 
This program will use different functions to open up a Bank account
*/
#include "Account.hpp" // everything in your 'hpp' file will be included in this 'cpp' file

std::string Account::generateAccountNumber(){
    std::string an_str = "";
    for(int i{0}; i < 8; i++ ){
        int temp = rand() % 10;
        an_str += std::to_string(temp);
    }
    return an_str;
}

// Deafault Constructor
Account::Account() // Accessing default constructor "Account" in the class Account
{
    first_name_ = "anonymous";
    last_name_ = "anonymous";
    pin_number_ = "0000";
    account_number_ = generateAccountNumber(); // generates a random account number and set it equal to the variable 'account_number_'
    balance = 0;
}

// Parameterized Constructor
Account::Account(std::string first_name, std::string last_name, std::string pin_number) {
    first_name_ = first_name; // set 'first_name_' equal to whatever the user inputs based on the parameter 'first_name'
    last_name_ = last_name; // set 'last_name_' equal to whatever the user inputs based on the parameter 'last_name'

    if (pin_number.length() == 4) { // checks the length of the pin number
        pin_number_ = pin_number; // if the length of the pin number is 4, you set 'pin_number_' equal to the user's input 
    } else {
        pin_number_ = "0000"; // if it's NOT 4 digits, it'll set the 'pin_number_' equal to "0000"
    }
    account_number_ = generateAccountNumber();
    balance = 0;
}

// Mutators (set)
void Account::setFirstName(std::string first_name) 
{
    first_name_ = first_name;
}

void Account::setLastName(std::string last_name)
{
    last_name_ = last_name;
}

bool Account::setPin(std::string pin)
{
    if (pin.length() == 4) {
        pin_number_ = pin;
        return true;
    } else {
        return false; 
    }
}

// Accessors (get) 
std::string Account::getFirstName()
{
    return first_name_;
}
std::string Account::getLastName()
{
    return last_name_;
}
std::string Account::getAccountNumber()
{
    return account_number_;
}
std::string Account::getPin() 
{
    return pin_number_;
}
int Account::getBalance()
{
    return balance;
}

// Transactions
bool Account::transaction(int amount)
{
    if (balance + amount > 0) { // checks if your 'current balance' + the 'amount' is greater than 0 (so you can withdraw)
        balance += amount; // if it is, add the 'amount' to your current 'balance'
        return true;
    } else {
        return false;
    }
}

