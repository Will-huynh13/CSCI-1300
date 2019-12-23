// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// Rec 4 problem 2

#include <iostream>
using namespace std;

/**
 * Algorithm: This function will print all postitive multiples of an integer number less than or equal to a max value
 * 1. the function will check if its a multiple of the entered number, and from there it will print up to a max value
 * 2. int Nums will be the value that the function will compare to in the while statement (int i = 1)
 * 3. a while statement such as while(i*nums <= Max) will check if the number the user enters is less than or equal to the max value.
 * 4. i++ add to the value until it is true to the while loop.
 * 
 * */
 
 void printMultiples(int nums, int Max)
 {
     // declared a variable called Nums and is given an initial value of 0
     int i = 1;
     // this while statemenmt checks if the Nums value is greater or equal to the inputed number (max)
     while(i*nums <= Max)
     {
         cout << nums * i << endl;
          i++;
     }
 }
 int main()
 {
     printMultiples(3,9);
     printMultiples(2,10);
     return 0;
 }