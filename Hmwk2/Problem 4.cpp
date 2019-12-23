// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// Homework 2 - Problem # 4

#include <iostream>
#include <math.h>

using namespace std;

/**
 * Algorithm: this program is made to calculate the amount of energy emitted per unit of time by a star
 * 1. luminosity is calculated by dertermining the brightness and distance.
 * 2. The function will be named luminosity and will accept two input arguements
 * 3. Variables like brightness and distance will be declared as doubles in this function
 * 4. Using the formula L = 4bπd^2 it will calculate the energy emiited (4 * b * pow(d,2) * M_PI).
 * 5. The function will not print or display anything.
 * */

// function is an int so it will be returning a value
// brightness and distance will be doubles
int luminosity(double brightness, double distance)
{
  // a double is assigned to a new variable because of the output
  double luminosity_BD = 4*brightness*pow(distance,2)*M_PI;
// retuen value because the function is required to return a value.
  return luminosity_BD; 
  
}
// this is where the function is called and assigned test values
int main()
{
    // first print out testing for first value
  cout << "Your calculated luminosity is: " << luminosity(400,100) << endl;
  // second print out for luminosity.
  cout << "Your second calculated luminosity is: " << luminosity(1.5,17.8) << endl;
  
  return 0;
  
}