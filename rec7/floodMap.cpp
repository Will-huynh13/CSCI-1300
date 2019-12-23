// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// rec 7 problem 3

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <unistd.h>
#include <stdio.h>
#include <string>
using namespace std;

/**
 * Algorithm: this function will take 2 arguements and will print a map.
 * 1.  the function will print out a 2 dimensional array with 4 columns
 * 2. * will represent a postion and water level will represent by _.
 * */
 
void floodMap(double array[][4], int size, int height)
{
    // this for statement checks for size
    for(int i = 0; i < size; i++)
    {
        // this for loop makes the column
        for(int j = 0; j < 4; j++)
        {
            // this checks if the array i bigger or equal to the height of the declared height
            if(array[i][j] <= height)
            {
                cout << "*";
            }
            else
            {
                cout << "_";
            }
            cout << endl;
        }
    }
}

int main()
{
    double a[1][4] = {{5.0, 7.6, 3.1, 292}};
    floodMap(a,1,6.0);
    cout << endl;
    
    double map[2][4] = {{0.2, 0.8, 0.8, 0.2}, {0.2, 0.2, 0.8, 0.5}};
    floodMap(map, 2, 0.0);
    cout << endl;
    
    double map2[2][4] = {{0.2, 0.8, 0.8, 0.2}, {0.2, 0.2, 0.8, 0.5}};
    floodMap(map2, 2, 0.5);
    cout << endl;
    
    double map3[2][4] = {{0, 28, 1, 0.2}, {0.2, 2, 0.8,.5}};
    floodMap(map3, 2, 0.5);
    cout << endl;

    double map4[2][4] = {{0.2, 0.8, 0.8, 0.2}, {0.2, 0.2, 0.8, 0.5}};
    floodMap(map4, 2, 1.0);
    cout << endl;
    
    double map5[2][4] = {{0.1, 0.8, 0.3, 0.2}, {0.11, 0.2, 0.4, 0.5}};
    floodMap(map5, 2, 1.5);
    cout << endl;
    
    double map6[4][4] = {{1.0, 5.0, 1.0, 1.0}, {1.0, 5.0, 5.0, 1.0},{5.0, 1.0, 5.0, 5.0}, {1.0, 1.0, 1.0, 1.0}};
    floodMap(map6, 4, 3.14);
    cout << endl;
}