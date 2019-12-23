// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// rec 4 problem 3

#include <iostream>
#include <string>
using namespace std;

/**
 * Algorithm: this progam will make two squares one will be hollow and one will be filled
 * 1. The function will not return anything 
 * 2. there will be the usage of for loops
 * 3. The function will take an int parameter named width
 * 4. The statement for(int line = 0; line < squares_width; line++) will assign the value 0 to line and compare it to the inputer value, if it is less than the input then add 1.
 * 5. String.append is the usage of a string
 * 6. for(int firstLine = 0; firstLine < squares_width; firstLine++) compares the first line to the input and if it i less than it would add 1
 * 7. if(line == 0 | line == squares_width -1) this if statement will check if it equals, then subtract 1 from the input.
 * */
 
     
 void printSquares(int squares_width)
 {
     // declared the string and variables
     string string = "";
     int line;
     int firstLine;
     // this for statement will compare the line variable to the input and see if it is less than the input, if so it will add 1.
     for(int line = 0; line < squares_width; line++)
     {
         // this for statement will compare the firstline variable to the input and see if it is less than the input, if so it will add 1.
         for(int firstLine = 0; firstLine < squares_width; firstLine++)
         // string.append is use to print the strings
         string.append("*");
         string.append(" ");
         for(int firstLine = 0; firstLine < squares_width; firstLine++)
         {
             // this if statement sees if the line is equal to the input, if so it would subract 1
             if(line == 0 | line == squares_width -1)
             {
                 //prints the string
                string.append("*");
             }
             // this if statement sees if the firstline is equal to the input, if so it would subract 1
             else if (firstLine == 0 | firstLine == squares_width -1)
             {
                string.append("*");
             }
             else
             {
                 string.append(" ");
             }
         }
         cout << string << endl;
             string = "";
     }
     
 }
 
 int main()
 {
     printSquares(5);
     printSquares(9);
     return 0;
 }