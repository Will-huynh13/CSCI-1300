// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// Hmwk 7 Books.cpp file

#include "Book.h"
using namespace std;

//accessing the default constuctor
Books::Books()
{
    // setting the strings to a null value
    title = "";
    author = "";
}

Books::Books(string newtitle, string newauthor)
{
    title = newtitle;
    author =  newauthor;
}

string Books::getTitle() 
{
    return title;
}

void Books::setTitle(string title1)
{
    title = title1;
}

string Books::getAuthor()
{
    return author;
}

void Books::setAuthor(string author1)
{
    author = author1;
}
