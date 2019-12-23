#include "User.h"
using namespace std;

User::User()
{
    username = "";
    numRatings = 0;
    size = 200;
    
    for(int i = 0; i < size; i++)
    {
        ratings[i] = -1;
    }
}

User::User(string NewUser, int rating_1[],int num)
{
    username = NewUser;
    size  = 200;
    
    for(int i = 0; i < size; i++)
    {
        ratings[i] = -1;
    }
    
    for(int i = 0; i < num; i++)
    {
        ratings[i] = rating_1[i];
    }
    if(numRatings <= size)
    {
        numRatings = num;
    }
}

string User::getUsername()
{
    return username;
}

void User::setUsername(string User1)
{
    username = User1;
}

int User::getRatingAt(int index)
{
    if(index < size)
    {
        return ratings[index];
    }
    else
    {
        return -1;
    }
}

bool User::setRatingAt(int index, int value)
{
    if(value >= 0 && value <= 5 && index < size)
    {
        ratings[index] = value;
        return true;
    }
    else
    {
        return false;
    }
}

int User::getNumRatings()
{
    return numRatings;
}

void User::setNumRatings(int n)
{
    numRatings = n;
}

int User::getSize()
{
    return size;
}