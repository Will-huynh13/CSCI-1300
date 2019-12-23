// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// Homework 2 - Problem # 2

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

/**
 * Algorithm: converting Celsius into Fahrenheit using a formula
 * 1. The user is prompted to enter the temperature in Celsius to convert into Fahrenheit
 * 2. The function is a void so it does not return a value.
 * 3. The number in Celsius will be converted using the formula F=C*(9.00/5.00)+32
 * 4. Celsius will be assigned as an integer.
 * 5. Fahrenheit will de declared as a double.
 * 6. Lastly, the function will be called from the main and will be displayed as "The temperature of x in fahrenheit is y".
 * */

// this is the function that converts the temperature in celsius to fahrenheit.
void celsiusToFahrenheit(int temp_c)
{
  // This is the formula that converts the Celsius into Fahrenheit
  double Fahrenheit = temp_c * (9.00/5.00) + 32;
  
  // this cout statment sets the layout of how the function would print
  cout << "The temperature of " << temp_c << fixed << setprecision(2)<< " in fahrenheit is " << Fahrenheit << fixed << setprecision(2) <<endl;
}
// this main statment houses the prompt for the temperature in Celsius and as well as test cases and user prompt
//float value and variables that have values that are called through the function
int main()
{
  cout << "enter the temperature in Celsius you want to convert: " << endl;
  int temp_u;
  cin >> temp_u;
  // this is calling the function 
  celsiusToFahrenheit(temp_u);
  int temp = 38.00;
  celsiusToFahrenheit(temp);
  // temp is given a different value
  temp = 100.00;
  celsiusToFahrenheit(temp);
  
  return 0;
}