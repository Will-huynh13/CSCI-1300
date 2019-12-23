// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// Hmwk 8 Books.cpp file

#include "Book.h"
#include <string>
using namespace std;

//accessing the default constuctor
Book::Book()
{
    // setting the strings to a null value
    title = "";
    author = "";
}

Book::Book(string newtitle, string newauthor)
{
    title = newtitle;
    author =  newauthor;
}

string Book::getTitle() 
{
    return title;
}

void Book::setTitle(string title1)
{
    title = title1;
}

string Book::getAuthor()
{
    return author;
}

void Book::setAuthor(string author1)
{
    author = author1;
}