// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// Hmwk 8 Users header file

#include <iostream>
#include <string>
using namespace std;

#ifndef User_H
#define User_H

class User
{
    private:
    string username;
    int ratings[200];
    int numRatings = 0;
    int size = 200;
    
    public:
    User();
    User(string username, int ratings[], int numRatings);
    string getUsername();
    void setUsername(string username);
    void setNumRatings(int numRatings);
    int getRatingAt(int index);
    int getNumRatings();
    bool setRatingAt(int index, int value);
    int getSize();
};
 #endif
