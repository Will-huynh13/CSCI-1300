// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// replace

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <unistd.h>
#include <stdio.h>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

void modifyVector(vector<int>& v)
{
    int n = 1;
    while(n > 0)
    {
       cout << "Please enter an integer value:" << endl;
       cin >> n;
       
       if(n < 0)
       {
           break;
       }
       if(v.size() == 0)
       {
           v.push_back(n);
       }
       else if(n % 3 == 0)
       {
           v.pop_back();
       }
       else if( n % 5 == 0)
       {
           v.erase(v.begin());
       }
       else
       {
           v.push_back(n);
       }
    }
}

int main()
{
    
}