// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// Homework 3 Problem 2

#include <iostream>
using namespace std;

/**
 * Algorithm: This functionn is called countDigits and it takes the user's input and sees how many digits are there
 * 1. The function will take integers as input and will be less than 1000 and greater than 1000.
 * 2. If the number is negative, it will be multiplied by -1
 * 3. if (number >= 0 && number <= 9) will give an output of 1 because the number is up to 9
 * 4. else if (number >= 10 && number <= 99) gives the output of 2 because the number is to 99
 * 5. else if (number >= 100 && number <= 999) give the output of 3 because it is up to 999
 * */
 
 // the function takes only integers
 int countDigits(int number)
 {
     // a counter variable is added to count the digits
     int counter;
     // this counts digits up to 9 and gives the value of 1 if the number is in the range 
     if (number >= 0 && number <= 9)
     {
         counter++;
         return 1;
     }
      // this counts digits up to 99 and gives the value of 2 if the number is in the range 
     else if (number >= 10 && number <= 99)
     {
         counter++;
         return 2;
     }
      // this counts digits up to 999 and gives the value of 3 if the number is in the range 
     else if (number >= 100 && number <= 999)
     {
         counter++;
         return 3;
     }
     //this statement will multiply a -1 to all negative values that are inserted by the user
     else if (number < 0 && number >= -9)
     {
         number*-1;
         counter++;
         return 1;
     }
       //this statement will multiply a -1 to all negative values that are inserted by the user
     else if (number <= -10 && number >= -99)
     {
         number*-1;
         counter++;
         return 2;
     }
       //this statement will multiply a -1 to all negative values that are inserted by the user
     else if (number <= -100 && number >= -999)
     {
         number*-1;
         counter++;
         return 3;
     }
     //returns the total count of the counter
 return counter;
 }
 // main to test the function
 int main()
{
    int n;
    cout << "Enter your number to check how many digits: " << endl;
    cin >> n;
    cout << "You have: " << countDigits(n) << " digits" << endl;
    cout << "Test case 1: " << countDigits(300) << endl;
    cout << "Test case 2: " << countDigits(445) << endl;
    return 0;
}