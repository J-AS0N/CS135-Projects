/* 
Author: Jason Weng
Course: CSCI 135
Instructor: Genady Maryash
Assignment: Project 1, Task 3 (Open to the public) 
This program will loop through a string, check for the character ";", and continue with the directions
*/

#include <iostream>
using namespace std;

int main()
{
    int maze[6][6] = {
        1,0,1,1,1,1,
        1,0,0,0,1,1,
        1,0,1,0,0,1,
        1,0,1,0,1,1,
        1,0,0,0,0,0,
        1,1,1,1,1,1,
    };
    int row = 0;      //starting position
    int col = 1;      //starting position
    string s;
    while (cin >> s) {     //While the user inputs something, the while loop begins
        for (int i = 0; i < s.size(); i++) {
            char direction = s[i];
            if (direction == 'R') {     //if (s) equals the letter "R"
                if (col != 5 && maze[row][col+1] == 0) {     //if col != 5 AND location of maze[row][col+1] == 0, then you move right by 1
                    col++;     //increase col by 1 (moves right)
                }
            }
            else if (direction == 'L') {          // == 0 means you only move if there's a zero (0)
                if (col != 0 && maze[row][col-1] == 0) {     //if col != 0, This means, based on your location, you can't move left (it'll be out of bound)
                    col--;     //decrease col by 1 (moves left)
                }
            }
            else if (direction == 'D') {
                if (row != 5 && maze[row+1][col] == 0) {     //if row != 5 AND maze[row+1][col] == 0, the row moves down by 1
                    row++;     //increase row by 1 (moves down)
                }
            }
            else if (direction == 'U') {
                if (row != 0 && maze[row-1][col] == 0) {     //if row != 0 AND maze[row-1][col] == 0, the row moves up by 1
                    row--;     //decrease row by 1 (moves up)
                }
            }
            else if (direction == ';') {
                if (row == 4 && col == 5) {
                    cout << "You got out of the maze" << endl;
                } else {
                    cout << "You are stuck in the maze" << endl;
                }
                row = 0;     //resets the row to 0 and col to 1 (starting position) so they can take directions again to test
                col = 1;
            }
        }        
    }
}