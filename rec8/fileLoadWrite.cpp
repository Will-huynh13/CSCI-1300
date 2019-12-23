// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// rec 8 problem 2

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
 
int fileLoadWrite(string filename)
{
    ofstream file_in;
    file_in.open(filename);
    
    if(file_in.fail())
    {
       return -1;
    }
    
    for(int i = 1; i < 11; i++)
    {
      file_in << pow(i,2) << endl;
    }
    file_in.close();
    return 0;
}

int main()
{
   fileLoadWrite("filename.txt");
}