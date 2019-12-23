// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// Hmwk 8 Library header file

#include <iostream>
#include <string>
#include "Book.h"
#include "User.h"
using namespace std;

#ifndef Library_H
#define Library_H

class Library
{
    private:
    Book book1[200];
    User user1[200];
    int numBooks = 0;
    int numUsers = 0;
    int sizeBook = 200;
    int sizeUser = 200;
    
    public:
    Library();      
    int readBooks(string);
    int readRatings(string);
    void printAllBooks();
    int getCountReadBooks(string);
    double calcAvgRating(string);
    bool addUser(string);
    bool checkOutBook(string, string, int);
    void viewRatings(string);
    void getRecommendations(string);
};

#endif