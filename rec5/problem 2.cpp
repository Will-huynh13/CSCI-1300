// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// rec 5 problem 2

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <unistd.h>
#include <stdio.h>
#include <string>
using namespace std;

/**
 * Algorithm: this function will count the amount of digits in a string
 * 1. the function will take 1 parameter , a string.
 * 2. the function will return the amount of digits
 * 3. if(s[i] >= '0' && s[i] <= '9') is the function that will take tall the digits in the string and compare it
 * 4. if the numbers fo fall under that condition, then it will add to the counter.
 * 
 * */
 
 int getDigitCount(string s)
 {
     // there is a counter that counts the number of times
     int count = 0;
     // this for statement compares int i to the string length
     for(int i = 0; i < s.length(); i++)
     {
         // if the number is in the range of 0 and 9, then it will add 1 to the counter
         if(s[i] >= '0' && s[i] <= '9')
         {
             count++;
         }
     }
     return count;
 }
 
 // these are the test cases for the function.
int main()
{
     string s = "12345";
     string p = "a blue house";
     string z = "a0aaa";
     cout << getDigitCount(s) << endl;
     cout << getDigitCount(p) << endl;
     cout << getDigitCount(z) << endl;
}