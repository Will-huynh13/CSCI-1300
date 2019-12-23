// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// rec 5 problem 3

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <unistd.h>
#include <stdio.h>
#include <string>
using namespace std;

/**
 * Algorithm: this function takes a candidate substring and returns the
 * number of times it occurs in another sting.
 * 1. The function will take 2 parameters, a string and a substring
 * 2. the function will also return the number of lines the subtrings occur in the string
 * 3. the function will not print anything
 * */
 
 int getMatchCount(string sub, string s)
 {
     // this is where the counter is declared
      int counter = 0;
      // this checks if the input is empty
     if(sub.length() == 0 || s.length() == 0)
     {
         return -1;
     }
     // if the sub string is longer than the string, it will return -2
     else if (sub.length()>s.length())
     {
         return -2;
     }
     // this checks for the substring
     for(int i = 0; i <= s.length() - sub.length(); i++)
     {
         if(s.substr(i,sub.length()) == sub)
         {
             counter++;
         }
     }
     return counter;
 }
     
int main() 
{
    cout << getMatchCount("si", "mississippi") << endl;
    cout << getMatchCount("ipp", "mississippi") << endl;
    return 0;
}