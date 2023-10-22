/*
Author: Jason Weng
Course: CSCI 135
Instructor: Genday Maryash
Assignment: Project 3, Task 1 (Openning an Account)
This is a hpp file
*/

#include <iostream>
#include <string>
#ifndef ACCOUNT_HPP // guards ~ prevents re-definition of the same functions
#define ACCOUNT_HPP // Capitalize the letters (for some reason :/ )

class Account { // constructors - everytime you call a class object, it automatically calls the constructor
    public:
        Account(); // default constructor
        Account(std::string first_name, std::string last_name, std::string pin_number); // parameterized constructor (constructor with parameters)

        // Mutators (setters)
        void setFirstName(std::string first_name); // mutators just set things
        void setLastName(std::string last_name);
        bool setPin(std::string pin);

        // Accessors (getters)
        std::string getFirstName(); // Accessors (get)
        std::string getLastName();
        std::string getAccountNumber();
        std::string getPin();
        int getBalance();

        // Transactions
        bool transaction(int amount);


    private:
        std::string first_name_;
        std::string last_name_;
        std::string account_number_;
        std::string pin_number_;
        int balance;

        std::string generateAccountNumber(); // private members can't be accessed by another class 
};
#endif // needed because we're using guards