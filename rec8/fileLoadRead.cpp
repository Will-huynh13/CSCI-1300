// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// rec 8 problem 3

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
 
 int fileReadLoad(string filename)
 {
     ifstream file_in;
     file_in.open(filename);
     
     if(file_in.fail())
     {
         return -1;
     }
     
     string line = " ";
     int index = 0;
     
     while(getline(file_in,line))
     {
         index++;
     }
     file_in.close();
     return index;
 }
 
 int main()
 {
     fileReadLoad("filename.txt");
 }