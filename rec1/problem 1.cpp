// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// Homework 3 problem 1

#include <iostream>
#include <math.h>
using namespace std;

/**
 * Algorithm: This function is called collatzStep
 * 1. This function will let the user enter in numbers, depending on the number,the function will return specific values
 * 2. If the number is even then it is divided by 2
 * 3. If the number is odd, then it is mulitplied by 3 and adds 1.
 * 4. If a negative value is entered, then the function will return 0.
 * 5. An integer will be used for the variables and it will return an interger type as well.
 * 6. if (n % 2 == 0) will check if it is even
 * 7. else if (n % 2 == 1 ) will check if it is odd
 * 8. n/2 will be executed if the function is even
 * 9. 3n+1 will be executed if the number is odd.
 * 10. if the number is negative then it will return 0.
 * */
 
 // the function is declared as an int
 int collatzStep(int n)
 {
     // this checks if the number is even
     if (n % 2 == 0)
     {
         // if so, the function is divided by 2
        return n/2;
     }
     // this runs the number into a test that checks for odd numbers
     else if (n % 2 == 1 )
     {
         // if so, the function is multiplied by 3 and add 1
         return n*3+1;
     }
     else
     // for anything else then that, like negatives, the function returns 0
     {
         return 0;
     }
     return n;
 }
 
 int main()
 {
     int number;
     cout << "What is your number? " << endl;
     cin >> number;
    cout << collatzStep(number) << endl;
    cout << "Test case 1: " << collatzStep(6) << endl;
    cout << "Test case 2: " << collatzStep(9) << endl;
    
    return 0;
 }
 
 