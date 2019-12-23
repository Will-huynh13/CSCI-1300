// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// Rec 3 - Problem # 3

#include <iostream>
#include <math.h>
using namespace std;

/** 
 * Algorithm: This program is a leap year calculator
 * 1. The user is prompted to enter a year and the fucntion will see if it is a leap year.
 * 2. This function will be using Boolean operators and if statements.
 * 3. The Bool function will take -1 or 0 for true and false
 * 4. The condtion will check if the years is greater than 1582 and is divisible by %400 (if year > 158 & year % 400 == 0)
 * 5. The function will also see if the year is divisible by %4 and 100, if so then it will return true ( year % 4 == 0 & year % 100)
 * 6. Lastly it will check if the year is less than 1582 and is divisible by %4.
 * */
 // a bool statement is used to see the condition
 bool checkLeapYear(int years)
 {
     // if the year is greater than 1582 and is divisble by 400, 4, they are leap years
     if (years > 1582 & years % 400 == 0 || years % 4 == 0 & years % 100 != 0)
     {
         // returns a value for the statment
         return true;
     }
     // this condtion sees if the years are less than 1582.
     if (years < 1582 & years % 4 == 0)
     {
         return true;
     }
 }
// main to check the years
int main ()
{
    int years;
    cout << "what year do you want to check? " << endl;
    cin >> years;
    cout << checkLeapYear(years) << endl;
    return 0;
}