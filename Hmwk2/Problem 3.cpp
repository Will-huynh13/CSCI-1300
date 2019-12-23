// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// Homework 2 - Problem # 3

#include <iostream>
#include <math.h>

using namespace std;

/**
 * Algorithm: This is a function that calculates the U.S population in one year.
 * 1. This program will prompt the user with a custom value as well as the test caes.
 * 2. population will be the function name and it will only accept one input argument.
 * 3. Time will be calculated by multiplying 365*24*60*60 (int total_year = 365*24*60*60).
 * 4. There is a birth every 8 seconds, meaning that the time should be divided by 8. (int total_year/8).
 * 5. There is also a death every 12 seconds so the formula for that will be the time divided by 12(total_year/12);
 * 6. There is also a new immigrant arriving in the U.S every 27 seconds so the time should be divided by 27(total_year/27).
 * 7. To calculate the current population, birth + immigrants - death.
 * */

// the function population will take the birth, deaths, and  immigration rates and make a formula out of it.
// population is declared as a int.
int population(int current_population)
{
  // This is the formula that calculates the population 
  int total_year = 365*24*60*60;
  // floor makes it so that is a whole number
  int birth = floor (total_year/8);
  // the amount of time is divided by 12 to find the death value
  int death = floor (total_year/12);
  // immigrants are caculated by dividing the total time by 27.
  int immigrants = floor (total_year/27);
  int calculated_popuation = current_population + immigrants + birth - death;
  // returned the value for the function
  return calculated_popuation;
  
}
// this is where the function is called and assigned test values
int main()
{
    // first print out for population.
  cout << "Your calculated population is: " << population(400) << endl;
  // second print out for population.
  cout << "Your second calculated population is: " << population(100000) << endl;
  
  return 0;
  
}