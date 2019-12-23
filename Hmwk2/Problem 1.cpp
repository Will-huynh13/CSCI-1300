// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// Homework 2 - Problem # 1

#include <iostream>
#include <math.h>

using namespace std;

/**
 * Algorithm: turning seconds into hours, minutes, and the remaining seconds left.
 * 1. Takes the seconds either from the user or test case and pass it through the function
 * 2. The function is a void so it does not return a value.
 * 3. User has the choice of entering the amount of seconds they want to convert
 * 4. Seconds is declared as an int as well as hours, minutes, and remaining hours and minutes.
 * 5. To calcualte the hours, the total seconds is divided by 3600 (tot_seconds/3600).
 * 6. To calculate the minutes, the total seconds is divided by % 3600 (tot_secconds%3600).
 * 7. To calculate the seconds, the remaining hour is divied by %60.
 * Lastly, the function will be called from the main and will be displayed as x hour(S) y minute(s) z second(s).
 * */

// this is the function that converts the seconds into hours, minutes, and seconds
void convertSeconds(int tot_seconds)
{
  // these are the algorithm that convert seconds into hours, minutes, and seconds
  // divide by 3600 to get hours
   int hours = (tot_seconds/3600);
   // divide by %3600 to get remainder
   int hours_r = (tot_seconds%3600);
   // then divide the rest b 60
   int minutes = (hours_r/60);
   // then from there take the rest of the remainder
   int second_r = (hours_r % 60);
  
  // this cout statment sets the layout of how the function would print
  cout << hours << " hour(s) " << minutes << " minute(s) " << second_r << " second(s) " << endl;
}
// this main statment houses the prompt for the amount of seconds and as well as test cases and user prompt
//float value and variables that have values that are called through the function
int main()
{
  cout << "enter the numbers of seconds you want to convert: " << endl;
  int seconds;
  cin >> seconds;
  // this is calling the function 
  convertSeconds(seconds);
  float time_s = 3671;
  convertSeconds(time_s);
  // time_s is given a different value
  time_s = 40000;
  convertSeconds(time_s);
  return 0;
}