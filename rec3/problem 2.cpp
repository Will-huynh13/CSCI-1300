// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// Rec 3 - Problem # 2
#include <iostream>
#include <math.h>
using namespace std;

/**
 * Algortihm: This program calculates the overtime pay and as well as regular pay with if and else statements
 * 1. the user will enter in data values for the amount of hours worked
 * 2. the user will also enter in tdata values for the rate at which they get paid at.
 * 3. the function is caled calcPay and it will check for negative hours and rates using and if statement. if (hours < 0 || rate < 0) 
 * 4. If the inputed hoours and rate are less than 0, then the function will print out "Pay rate and hours worked cannnot be negative values."
 * 5. if the input value is true for the firt if statment, then it will continue to the next where it checks if the amount of hours work go over 40.
 * 6. if so, the function will take the hours and multiply them to the rate and print the result. p = hours * rate;
 * 7. The when hours are more than 40, the hour and rate will be multiplied by 1.5.
 * */
// function named calcPay,takes 2 double parameters
double calcPay(double hours, double rate)
{
    double p;
    double overpay;
    double total;
    // checks if the hours entered are negative
    if (hours < 0 || rate < 0)
    {
        // this is printed if the hour and rates are negative.
        return -1;
    }
    // this is the second part of the if statment, if the terms satisfy the condition then it will continue to this else statment
    else
    {
        // if the hours here are less than or equal to 40, the the hour and rates are multiplied together to get the total pay
        if(hours <= 40)
        {
            p = hours * rate;
        }
        // if not, meaning that the hours are more than 40, it is passed through this statement
        else if (hours > 40)
        {
            // overtime pay for the function
             p = hours * rate;
             overpay = (hours - 40)*(rate * 1.5)+ 40*(rate);
             total = overpay;
             return overpay;
            
        }
    }
    // valued is returned here
   return p;
}
// this main statement is here to ask the user and as well as printing the results
int main()
{
    double hours;
    double rate;
    cout << "How many hours have you worked? " << endl;
    cin >> hours;
    cout << "What is your pay rate? " << endl;
    cin >> rate;
    cout << "Total pay: " << calcPay(hours,rate) << endl;
    return 0;
}