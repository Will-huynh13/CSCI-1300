// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// Homework 3 problem 3

#include <iostream>
using namespace std;

/**
 * Algorithm: this function will take a single input (month) as an integer and out put the number of days
 * 1. A switch case will be use to output the result
 * 2. depending on the number of the month, if a number falls under a case, it will output that result.
 * 3. Assuming that the numbers of entered by the user are all positive, the case will run.
 * */
 // this is the function and it uses a switch statement to output the result
 void daysOfMonth(int numbers)
 {
     
     // numbers is assigned to a switch statement 
        switch (numbers)
        {
            // for the following cases, the case number meets the numbers of months there are.
             case 1:
                    cout << "Month " << 1 << " has 31 days";
                    break;
                    // this case relates to February which can have 28 to 29 days
             case 2:
                    cout << "Month " << 2 <<" has 28 or 29 days";
                    break;
             case 3:
                    cout << "Month " << 3 <<" has 31 days";
                    break;
             case 4:
                    cout << "Month " << 4 <<" has 30 days";
                    break;
             case 5:
                    cout << "Month " << 5 <<" has 31 days";
                    break;
             case 6: 
                    cout << "Month " << 6 <<" has 30 days";
                    break;
             case 7:
                    cout << "Month " << 7 <<" has 31 days";
                    break;
             case 8: 
                    cout << "Month " << 8 <<" has 31 days";
                    break;
             case 9:
                    cout << "Month " << 9 <<" has 30 days";
                    break;
             case 10:
                    cout << "Month " << 10 <<" has 31 days";
                    break;
             case 11:
                    cout << "Month " << 11 <<" has 30 days";
                    break;
             case 12:
                    cout << "Month " << 12 <<" has 31 days";
                    break;
                    // a default case is here if the number entered by the user does not match the following cases.
             default:
                    cout << "Invalid month number";
                    break;
         } 
    }
 int main()
 {
     daysOfMonth(6);
     
     daysOfMonth(9);
     return 0;
     
 }
 
 