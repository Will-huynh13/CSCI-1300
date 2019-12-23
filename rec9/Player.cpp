#include "Player.h"

Player::Player(int nDice){
    
    for (int i = 0; i < nDice; i++)
    {
        Dice d1;
        d1 = myDice[i];
    }
}

void Player::setNumDice(int number){
    nDice = number;
}

void Player::playerRoll()
{
    // this is the for loop that rolls the dice
    for(int i = 0; i < nDice; i++)
    {
        myDice[i].roll();
    }
}

int Player::getDiceValueAtIndex(int i){
    // this returns the dice face value
    return myDice[i].getFaceValue();
}