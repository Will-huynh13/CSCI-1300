// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// rec 7 problem 1

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <unistd.h>
#include <stdio.h>
#include <string>
using namespace std;

/**
 * Algorithm: this function will replace each element in the array by
 * the first and last by the larger of the two neighbors.
 * 1. the function will take 2 parameters
 * 2. the first parameter will be the array as an int
 * 3. the second parameter is the length of the array
 * 4. the function will also not return anything.
 * */
 
 void replaceNums(int array[], int length)
 {
     // this checks if the length is greater than 0
     if(length > 0)
     {
         // making a temp variable to store the array
         int temp = array[0];
         int maxSize;
         
         // this is the for loop that transverses the array length
         for(int i = 1; i < length -1; i++)
         {
             // passes the array to this variable
             maxSize = temp;
             
             // this if statement checks if it is greater than the original array
             if(array[i+1] > maxSize)
             {
                 maxSize = array[i+1];
             }
             
             temp = array[i];
             array[i] = maxSize;
         }
     }
 }
 
 int main()
 {
     int array[2] = {1,5};
     replaceNums(array,2);
     
     for(int i = 0; i < 2;i++)
     {
         cout << array[i] << ", "; //expected 1,5
     }
     cout << endl;
     
     
     int array2[4] = {2,4,6,8};
     replaceNums(array2, 4);
     
     for(int i = 0; i < 4;i++)
     {
         cout << array2[i] << ", "; //expected 2, 6, 8, 8, 
     }
     cout << endl;
     
     int array3[8] = {2,4,6,8,12,34,56,0};
     replaceNums(array3, 8);
     
     for(int i = 0; i < 8;i++)
     {
         cout << array3[i] << ", "; //expected 2, 6, 8, 12, 34, 56, 34, 0, 
     }
     cout << endl;
     
     int array4[1] = {2};
     replaceNums(array4, 1);
     
     for(int i = 0; i < 1;i++)
     {
         cout << array4[i] << ", "; //expected 2,
     }
     cout << endl;
     
     int array5[7] = {2,4,6,8,12,34,56};
     replaceNums(array5, 7);
     
     for(int i = 0; i < 7;i++)
     {
         cout << array5[i] << ", "; //expected 2, 6, 8, 12, 34, 56, 56,  
     }
     cout << endl;
     
     int array6[3] = {2,4,6};
     replaceNums(array6, 3);
     
     for(int i = 0; i < 3;i++)
     {
         cout << array6[i] << ", "; //expected 2, 6, 6, 
     }
     cout << endl;
 }