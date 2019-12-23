// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// rec 5 problem 1

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <unistd.h>
#include <stdio.h>
#include <string>
using namespace std;

/**
 * Algorithm: this function will count the amount of words in a given string.
 * 1. the function will take a string named s
 * 2. There will be a an if statement that sees if the input is length of the string is 0 then it should return 0.
 * 3. There will also be a forloop that counts the string function
 * 4. The function will also have a return value that adds if the condtion is true. 
 * */
 
 int getWordCount(string s)
 {
  // checks if the length of the string is 0
     if (s.length() == 0)
     {
         return 0;
     }
     // sets the counter to 0
     int count = 0;
     
     // this for loop sets the variable i to 0 and adds 1 to it each time i is less than the string length
     for(int i = 0; i < s.length(); i++)
     {
      // counts the spaces
         if (s[i] == ' ')
         {
             count++;
         }
     }
     //returns the count and adds 1
     return count + 1;
 }
 // test cases for the function in the main
 int main()
 {
     string s = "";
     string p = "Go";
     string z = "I went";
     cout << getWordCount(s) << endl;
     cout << getWordCount(p) << endl;
     cout << getWordCount(z) << endl;
 }