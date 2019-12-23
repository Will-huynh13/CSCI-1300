// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// Rec 3 - Problem # 1

#include <iostream>
using namespace std;


/**
 * Algorithm: This is a function that sees if the number enter is either positve or negative or 0
 * 1. The first condition would be if the number is greater than 0, it should output "positive".
 * 2. The second condition would be if the number is less than 0 then it would print "negative".
 * 3. Lastly, if the condtion is neither then it should print out "zero".
 * */
 
// doesnt return a value because of the void
void numberSign(int number)
{
    // first if sees if the number is greater than 0
   if(number > 0) 
   {
       //prints out positive if the number is > 0
       cout << "positive";
   }
    // checks if the number is less than 0
   else if(number < 0)
   {
       // prints out negative if the number is less than 0
       cout << "negative";
   }
   else
   //lat condition is to see if it is neither, then it should print out zero
   {
       cout << "zero";
   }
}

int main()
{
    //This has the user enter a number and from there it is placed through the function to see if it is postive, negative or a zero
    int number;
    cout << "Enter a number to see if it is positive, negative or zero: " << endl;
    cin >> number;
    numberSign(number);
    return 0;
}