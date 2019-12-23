// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// rec 8 problem 1

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
 
 bool checkFile(string file_my)
 {
     ifstream file;
     file.open(file_my);
     if(file.fail())
     {
         return false;
     }
     else
     {
         return true;
     }
 }
 
 int main()
 {
     checkFile("file_my.txt");
     
 }