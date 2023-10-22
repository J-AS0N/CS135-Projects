/* 
Author: Jason Weng
Course: CSCI 135
Instructor: Genady Maryash
Assignment: Project 1, Task 4 (We've got a franchise on our hands) 
This program will ask the user to input directions. If the directions gets you out of the maze, it'll print "You got out of the maze". If the directions doesn't get
you out of the maze, it'll print "You are stuck in maze".
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {

    int maze[10][10];

    int start_row, start_col, end_row, end_col;
    int row, col;
    char symbol;
    string current_input;

     for (int row = 0; row < 10; row++) {
        for (int col = 0; col < 10; col++) {
            cin >> maze[row][col];     //Array is empty. Nested for loop loops through rows/columns and reads the text file. Then it'll input the values into the empty array
            //basically grabbing the maze from a text file and inputting it here
        }
    }

    cin >> start_row;
    cin >> start_col;
    cin >> end_row;
    cin >> end_col;
    cin >> symbol;

    if (symbol == ';') {
        row = start_row;
        col = start_col;
    }

while (cin >> current_input) {
    for (int i = 0; i < current_input.size(); i++) {
        char direction = current_input[i];
        if (direction == 'R') {
                if (col != 9 && maze[row][col+1] == 0) {     //if col != 9 AND location of maze[row][col+1] == 0 (meaning if there's a 0 to the right) then you move right by 1
                    col++;     //increase col by 1 (moves right)
                }
            }
            else if (direction == 'L') {
                if (col != 0 && maze[row][col-1] == 0) {     //if col != 0, This means, based on your location, you can't move left (it'll be out of bound)
                    col--;     //decrease col by 1 (moves left)
                }
            }
            else if (direction == 'D') {
                if (row != 9 && maze[row+1][col] == 0) {     //if row != 9 AND maze[row+1][col] == 0 (if there's a 0 below your current location) then the row moves down by 1
                    row++;     //increase row by 1 (moves down)
                }
            }
            else if (direction == 'U') {
                if (row != 0 && maze[row-1][col] == 0) {     //if row != 0 AND maze[row-1][col] == 0, the row moves up by 1
                    row--;     //decrease row by 1 (moves up)
                }
            }
            else if (direction == ';') {
                if (row == end_row && col == end_col) {     //if row = 9 AND col = 1 (ending position)
                    cout << "You got out of the maze" << endl;    //print this
                } else {     //if row != 9 AND col != 1
                    cout << "You are stuck in the maze" << endl;     //print this
                }
                row = start_row;     //resets row to 1 and col to 0 (starting position)
                col = start_col;
            }
        }
    }
}