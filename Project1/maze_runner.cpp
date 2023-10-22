/* 
Author: Jason Weng
Course: CSCI 135
Instructor: Genady Maryash
Assignment: Project 1, Task 2 (Stepping in) 
This program will ask the user to input directions. If the directions gets you out of the maze, it'll print "You got out of the maze". If the directions doesn't get
you out of the maze, it'll print "You are stuck in maze".
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
                if (row != 5 && maze[row+1][col] == 0) {     //if row != 0 AND maze[row+1][col] == 0, the row moves down by 1
                    row++;     //increase row by 1 (moves down)
                }
            }
            else if (direction == 'U') {
                if (row != 0 && maze[row-1][col] == 0) {     //if row != 0 AND maze[row-1][col] == 0, the row moves up by 1
                    row--;     //decrease row by 1 (moves up)
                }
            }
        }        
    }
    if (row == 4 && col == 5) {     //If row equals 4 AND column equals 5, you made it out of the maze
        cout << "You got out of the maze";
    } else {
        cout << "You are stuck in the maze";
    }
}
