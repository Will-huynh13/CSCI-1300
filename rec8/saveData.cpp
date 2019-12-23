// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// hmwk 6 part 1

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <unistd.h>
#include <stdio.h>
#include <string>
#include <fstream>
using namespace std;

/**
 * Algorithm:
 * */
 
 int saveData(string filename, string arr[], int n, int size)
 {
     ofstream file_in;
     file_in.open(filename);
     
     if(file_in.fail())
     {
         cout << "file open failed" << endl;
     }
     
     if(arr[n] == "" || (n < 0))
     {
         return -1;
     }
     double temp = 0;
     for(int i = 0; i < n; i++)
     {
        temp =  stod(arr[i]) + temp;
        
         
     }
     file_in << "Name: " << arr[n] << endl; 
     if(n < 0)
     {
         return -1;
     }
     file_in << "Avg: " << temp/n << endl;
     
     return temp/n;
     
 }
 
 int main()
 {
     
 }