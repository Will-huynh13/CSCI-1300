// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// Hmwk 7 Books header file

#include <iostream>
#include <string>
using namespace std;

#ifndef Book_H
#define Book_H

class Books
{
    public:
    Books();
    Books(string title, string author);
    string getTitle();
    void setTitle(string title);
    string getAuthor();
    void setAuthor(string author);
    
    private:
    string title;
    string author;
};

#endif
