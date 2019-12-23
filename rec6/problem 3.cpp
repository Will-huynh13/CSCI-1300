// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// rec 6 problem 3

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <unistd.h>
#include <stdio.h>
#include <string>
using namespace std;

/**
 * Algorithm: this function is made to split the strings and place
 * */
 
 int split(string s, char c, string words[], int n)
 {
     int counter = 0;
     int start = 0;
     int i = 0;
     
     while(i <= s.length())
     {
         if(s[i] == c || s[i] == '\0')
         {
             if(start != i)
             {
                 if(counter == n)
                 {
                     return -1;
                 }
                 words[counter++] = s.substr(start, i - start);
             }
             start = i +1;
         }
         i = i + 1;
     }
     return counter;
 }
 
int main() 
{
    const static int SIZE = 6;
    string words[SIZE];
    int numWord = split("cow/big pig//fish", '/', words, SIZE);
    
    for(int idx = 0; idx < numWord; idx++)
    {
        cout << "words[" << idx << "] = " << words[idx] <<endl;
    }
    
    
    const static int SIZE1 = 6;
    string words1[SIZE1];
    int numWord1 = split("lol coding haha", ' ', words1, SIZE1);
    
    for(int idxl = 0; idxl < numWord; idxl++)
    {
        cout << "words[" << idxl << "] = " << words1[idxl] << endl;
    }
    
    const static int SIZE2 = 6;
    string words2[SIZE2];
    int numWord2 = split("This,fish,big", ',', words2, SIZE2);
    
    for(int idxp = 0; idxp < numWord; idxp++)
    {
        cout << "words[" << idxp << "] = " << words2[idxp] << endl;
    }
    return 0;
}