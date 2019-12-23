// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// Rec 4 problem 1

#include <iostream>
using namespace std;

/**
 * Algorithm: this function will allow the user to print out numbers that are positive and even to their liking.
 * 1. printEvenNums will be the function name and it will take an int parameter.
 * 2. int Nums will be the value that the function will compare to in the while statement (int Nums = 0)
 * 3. An if statement will also be used to see if the number given is at the max, if so then the function will print. (if(Nums <= nums)
 * 4. Nums+=2 will indicate that there should be 2 added each time.
 * */
 
 //the fucntion is a void
 void printEvenNums(int nums)
 {
     // declared a variable called Nums and is given an initial value of 0
     int Nums = 0;
     // this while statemenmt checks if the Nums value is greater or equal to the inputed number (max)
     while(Nums <= nums)
     {
         //adds 2 to the even number
         Nums+=2;
         // checks it again, if so then print
         if(Nums <= nums)
         cout << Nums << endl;
     }
 }
 int main()
 {
     // test cases for max input of 10 and 20
     printEvenNums(10);
     printEvenNums(20);
     return 0;
 }