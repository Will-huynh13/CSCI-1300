// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// Project 1



///////////////////////////////////////////////////////////////////////////////////////////////////
// Step1: Steps to solve this problem
// write an algorithm in pseudocode explaining on how you are approaching the problem, step by step
///////////////////////////////////////////////////////////////////////////////////////////////////

/* In this program, the user will go up against the computer in a game of Jeopardy Dice and first one to reach 100 wins.
If they roll a 1 or 6 , their turn ends and the turnTotal becomes 0.
If they roll a 3, their turn ends and turnTotal becomes 15 (irrespective
what they collected up to that roll)
If they roll a 2,4,5 , the value on the dice accumulates to turnTotal
The value on the dice is selected randomly during every roll.

The first step is to wecome the user to the dice game and ask them if they want to roll.
when the user selects Y as the input, the game will start.

Fromm there, the program will call the function rolldice and returns the value it got.
if the rolled numbers are 1 or 6, the program will print out "You rolled 1/6, end turn, turn total 0".
if other numbers are rolled, like 2,4, and 5, the numbers will accumulate to the total turn. But if a 3 is rolled, the program will
print You rolled 3/6, end turn, turn total 15" and assign the turn total to 15.

if the user enters any other value oher than y, like "n" on start, the program will execute the computer's function.
the conmputer function will run similar to the user function. If the dice rolled by the computer is 1 or 6, then their turn total will become 0.
The program will continue to run until the game reaches 100.
*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <unistd.h>
#include <stdio.h>
using namespace std;

int turnTotal = 0;
int YourPoints = 0;
int CompPoints = 0;
int totalPoints = 0;

// this is the function that rolles the dice
int rollDice()
{
    return random() % 6 + 1;
}

// these are the string variables that are declared to see whos turn it is
string WhosTurn;
string RollTurn;

// this function is the dice function, this function will test cases for rolling a 1 or a 6
int DiceFunction(int turnTotal)
{
    int die;
    die = rollDice();
    switch(die)
    {
        case 6:
        // these are the cases in which the turntotal will be 0
        case 1:
        turnTotal = 0;
        // this if statement assigns the turns that dertermines whos turn it is
        if(WhosTurn == "human")
        {
            cout << "you rolled a " << die << endl;
        }
        else if (WhosTurn == "computer")
        {
            cout << "Computer rolled a " << die << endl;
        }
        RollTurn = "N";

        break;

        case 3:
        // this case makes it so that if a 3 is rolled, 15 will be the turntotal outcome.
        turnTotal = 15;
        if(WhosTurn == "human")
        {
            cout << "you rolled a " << die << endl;
        }
        else if (WhosTurn == "computer")
        {
            cout << "Computer rolled a "<< die << endl;
        }
        RollTurn = "N";
        break;

        default:
        // this is the case where if the dice rolled a 2,4,5
        turnTotal = turnTotal + die;
        if(WhosTurn == "human")
        {
            cout << "You rolled a " << die << endl;
        }
        else if (WhosTurn == "computer")
        {
            cout << "Computer rolled a "<< die << endl;
        }
        RollTurn = "Y";
        break;
    }
    return turnTotal;

}
// this is the player function
int Player(int YourPoints)
{
    WhosTurn = "human";
    // here if it is humans turn, it resets the turntotal
    int turnTotal = 0;
    cout << "Do you want to roll a dice (Y/N)?: " << endl;
    cin >> RollTurn;

    while(RollTurn == "Y" || RollTurn == "y")
    // if the user enters a Y or y, the function dice will be called and a result from that will be runned
    {
        turnTotal = DiceFunction(turnTotal);

        cout << "Your turn total is " << turnTotal << endl;

        if(RollTurn == "N" || RollTurn == "n")
        // this condition is when the user enters a n or N, it will direct to the computers turn
        {
            break;
        }
        cout << "Do you want to roll again (Y/N)?: " << endl;
        cin >> RollTurn;
    }
    // this gives you the total points
    YourPoints = turnTotal + YourPoints;
    return YourPoints;
}

// this is the computer function
int Computer(int CompPoints)
{
    // if the it is the computer's turn, the function will re assign the value to turntotal
    WhosTurn = "computer";
    turnTotal = 0;
    RollTurn = "Y";
    // this while statement will run if turntotal is less than 10 and the Rollturn is Y
    while(turnTotal < 10 && RollTurn == "Y")
    {
        // the dice function is called for the computer so it gets the result
        turnTotal = DiceFunction(turnTotal);
        //prints the turn total for computer
        cout << "computer turn total is " << turnTotal << endl;
    }
    CompPoints = turnTotal + CompPoints;
    return CompPoints;
}

// this is the game function
void game()
{
    string gameS = "N";
    // introduces the game in the beginning
    cout <<"Welcome to Jeopardy Dice!"<<endl<<endl;

    //assigns games to N
    while(gameS == "N")
    {
        cout <<"It is now human's turn"<<endl <<endl;
        YourPoints = Player(YourPoints);
        cout << "computer: " << CompPoints << endl;
        cout << "human: " << YourPoints << endl << endl;

        if(YourPoints >= 100)
        {
            // this if statement compares the users points to 100 and if the points is greater than 100 then the user wins
            cout << "Congratulations! human won this round of jeopardy dice!" << endl;
            gameS = "Y";
            break;
        }

        cout << "It is now computer's turn" << endl << endl;
        CompPoints = Computer(CompPoints);
        cout << "computer: " << CompPoints << endl;
        cout << "human: " << YourPoints << endl << endl;

        // this if statement checks to see if the computer points is greater than 100, if so, then the computer wins.
        if(CompPoints >= 100)
        {
            // this is the statement that is printed when the computer wins
            cout << "Congratulations! computer won this round of jeopardy dice!" <<endl;
            gameS = "Y";
            break;
        }

    }
}

int main()
{
    game();
    return 0;
}
