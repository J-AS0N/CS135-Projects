/* 
Author: Jason Weng
Course: CSCI 135
Instructor: Genady Maryash
Assignment: Project 1, Task 1 (Reading in directions) 
This program will ask the user for a input ('R', 'L', 'U' or 'D') and depending on the letter, it'll print out the directions "Right", "Left", "Up", or "Down"
*/

#include <iostream>
using namespace std; 

int main()
{
    string s;
    while (cin >> s){     //While the user inputs something, the while loop begins
        if (s == "R")     //if (s) equals the letter "R"
        {
            cout << "Right" << endl;     //prints out "Right"

        } else if (s == "L")     //if (s) equals the letter "L"
        {
            cout << "Left" << endl;     //prints out "Left"

        } else if (s == "U")     //if (s) equals the letter "U"
        {
            cout << "Up" << endl;     //prints out "Up"

        } else if (s == "D")     //if (s) equals the letter "D"
        {
            cout << "Down" << endl;     //prints out "Down"
        }
    }
}