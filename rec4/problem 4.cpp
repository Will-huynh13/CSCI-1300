// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// rec 4 problem 4

#include <iostream>
using namespace std;

/**
 * Algorithm: thi function will be called printDiamond and will be used to print a diamond
 * 1. The function will take 1 int parameter.
 * 2. The function will not be returning a value
 * 3. The function will also print a diamond with given side length to the screen
 * 4. for (int A = 1; A <= side; A++) will be used to Assign length A to 1 and from there it will compare to the input value
 * if it is less than, it will add 1.
 * 5.  for(C = (side - A); C >= 1; C--) this will check if the input is subtracted from side A, and if it is greater than 1,
 * then it will subract 1 from C
 * 6. for(int line = 1; line <= (2 * A - 1); line++) this will check for the product of 2 times the side A.
 * if the result is less than that, it will add 1 to the new side called line.
 * 7.
 * */
 
 void printDiamond(int side)
 {
     // variables
     int A;
     int C;
     // this first line assigns a value to the variable A
     // it then gets compared to the inut value that was assigned
     // if it is less than the input value, it will add one to A
     for (int A = 1; A <= side; A++)
     {
         // this line give the value C by subracting the input from A
         // from there it will compare the value to 1, if it is greater than 1, subtracts 1
         for(C = (side - A); C >= 1; C--)
         {
             //this is the out statement associated with the line
             cout << " ";
         }
         // this line gives a new variable to the function and as well as compared it to the value of (2 * A - 1)
         // it then compares 1 to the value, if it is less than, it will add 
         for(int line = 1; line <= (2 * A - 1); line++)
         {
             // this line is printed
             cout << "*";
         }
         cout << endl;
     }
     // this repeats for the second half of the diamond
     for (int A = (side - 1); A >= 1; A--)
     {
         for (int C = 1; C <= (side - A); C++)
         {
             cout << " ";
         }
         for (int line = 1; line <= (2 * A - 1); line++)
         {
             cout << "*";
         }
         cout << endl;
     }
 }
 
 int main()
 {
     printDiamond(4);
     printDiamond(8);
     return 0;
 }