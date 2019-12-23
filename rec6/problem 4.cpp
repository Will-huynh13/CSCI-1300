// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// rec 6 problem 4

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <unistd.h>
#include <stdio.h>
#include <string>
using namespace std;

/**
 * Algorithm:
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
 
 int getScores(string str, int a[], int numbers)
 {
     int start = 0;
     string words [numbers];
     
     int counter = split(str, ' ', words, numbers);
     
     for (int i = 0; i < counter; i++)
     {
         a[i] = stoi(words[i]);
     }
     return counter;
 }
 

 int main()
 {
     int a[4];
     int counter = getScores("12 -45 67 -89", a, 4);
     for(int i = 0; i < counter; i++)
     {
         cout << i << endl;
     }
     
     int a1[4];
     int counter1 = getScores("1 12 14 45", a, 4);
     for(int i = 0; i < counter1; i++)
     {
         cout << a1[i] << endl;
     }
     
 }
 