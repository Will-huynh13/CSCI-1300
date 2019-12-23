// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// rec 7 problem 4

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <unistd.h>
#include <stdio.h>
#include <string>
#include <fstream>
using namespace std;

/**
 * Algorithm: this function will read from a file of integers and store its content in an array.
 * 1. the function will take three parameters
 * 2. a string filename
 * 3. an array of integers
 * 4. a length for the array
 * */
 
 int getLinesFromFile(string filename, int array[], int length)
 {
     // this is the line that streams the filename
     ifstream in(filename.c_str());
     
     // this checks if the file is open, if so execute the following
     if(in.is_open())
     {
         int counter  = 0;
         int number;
         
         // this checks the integers in the array
         while(counter < length && in >> number)
         {
             array[counter++] = number;
         }
         return counter;
     }
     // if it does not satisfy the if, return -1
     else
     {
         return -1;
     }
 }
 
 int main()
 {
     int arr[4];
     getLinesFromFile("filename.txt", arr, 4);
     
          for(int i = 0; i < 4;i++)
     {
         cout << arr[i] << " "; // expected 1 2 23 18 
     }
 }