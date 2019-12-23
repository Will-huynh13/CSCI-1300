// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// rec 7 problem 2

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <unistd.h>
#include <stdio.h>
#include <string>
using namespace std;

/**
 * Algorithm: this function will print integers in a two dimensional array. Each row of the array should be
 * printed on a separate line with the integers sparated by commas.
 * the array has 5 columns.
 * 1. theere will be 2 input arguments an integer array and a length for it
 * 2. the function will not return anything
 * 3. the function will print the values in the array.
 * */
 
 void printTwoDArray(int array[][5], int length)
 {
     // checks if the length entered is 0
     if(length == 0)
     {
         cout << 0 << endl;
     }
     
     //checks if the length is negative
     else if(length < 0)
     {
         cout << -1 << endl;
     }
     
     else
     {
         // this for loop read the numbers in the array
         for(int i = 0; i < length; i++)
         {
             // this makes the columns
             for(int j = 0; j < 5; j++)
             {
                 // this is printing the arrays
                 cout << array[i][j];
                 
                 // if j is not at 4, then print commas
                 if(j != 4)
                 {
                     cout << ",";
                 }
                 else
                 {
                     cout << endl;
                 }
             }
         }
     }
 }
 
 int main()
 {
     int a[][5] = {{1,3,5,6,7}, {4,5,6,7,3}};
     int b[3][5] = {{123,3434,45,343,2}, {12,23,452,34,56,},{1,2,3,4,5}}; 
     printTwoDArray(a,0); // expected 0
     cout << endl;
     printTwoDArray(a,-1); // expected -1
     cout << endl;
     printTwoDArray(a,2); // expected 1, 3, 5, 6, \n 7, 4, 5, 6, 7, 3
     cout << endl;
     printTwoDArray(a,1); // expected 1,3,5,6,7
     cout << endl;
     printTwoDArray(b,3); // expected 123,3434,45,343,2 \n 12,23,452,34,56 \n 1,2,3,4,5
     cout << endl;
     printTwoDArray(b,2); //expected 123,3434,45,343,2 \n 12,23,452,34,56
     
 }