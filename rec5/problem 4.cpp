// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// rec 5 problem 4

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <unistd.h>
#include <stdio.h>
#include <string>
using namespace std;

/**
 * Algorithm: this function will return the last index of a desired string
 * 1. this function will take two parameters  a char parameter and a string parameter
 * 2. the function will not print anything
 * 3. this function will return -2 if the character is not found in the the string
 * 4. this function will returna -1 if the string is empty
 * */
 
 int getLastIndex(char c, string s)
 {
     // this conditioh checks if the string is 0
     if(s.length() == 0)
     {
         return -1;
     }
     int indexOfChar = -1;
     // this is the loop that checks for the amount of letters
     for(int i = 0; i < s.length(); i++)
     {
         // this condition checks if the char is in the string, if so then indexofChar is now i
         if(s[i] == c)
         {
             indexOfChar = i;
         }
     }
     // if it does not equal -1 then return it back
     if(indexOfChar != -1)
     {
         return indexOfChar;
     }
     return -2;
 }
 // main with test cases
 int main()
 {
     cout << getLastIndex('o', "lollipop") << endl;
     cout << getLastIndex('p', "mississippi") << endl;
     cout << getLastIndex('a', "hello") << endl;
     cout << getLastIndex('z', "zebra") << endl;
     return 0;
     
 }