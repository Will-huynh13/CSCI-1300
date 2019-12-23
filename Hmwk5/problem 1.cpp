// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// Hmwk 5 problem 1

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <unistd.h>
#include <stdio.h>
#include <string>
using namespace std;

/**
 * Algorithm: this program will compare DNA strands and see the similarities.
 * 1. This function will be named  simScore and it will take two parameters.
 * 2. They will be both strings, one being for the first sequence, the second will also be a string and will be
 * for the second sequence.
 * 3. This function will not print anyhting but will re turn a similarity score as a double.
 * 4. If the lengths of the sequeneces are different, then the function will return a 0.
 * 5. if any of the strings are empty, then the function will return a 0.
 * */
 
 double simScore(string s, string s2)
 {
     double count = 0;
     int i = 0;
     int j = 0;
     double max = 0; 
     
     //this for loop checks for the amount in each gen
     for( i = 0, j = 0; i < s.length(); i++, j++)
     {
        count = 0;
        
        for(j = 0; (i+j) < s.length() && j < s2.length(); j++)
        {
           if(s.at(i+j) != s2.at(j))
           {
             count++;
           }
        }
        if(j == s2.length())
        {
         // this is the score for them
           double score = (s2.length() - count)/ s2.length();
           
           if(score > max)
           {
              max = score;
           }
        }
     }
     return max;
 }
 
 
 void analyzer(string g1, string g2, string g3, string u)
 {
     if(g1.length() == 0 || g2.length() == 0 || g3.length() == 0 || u.length() == 0) // this checks if the lengths of the string is 0
     {
         cout << "Genome and sequence cannot be empty." << endl;
     }
     
     else if(g1.length() != g2.length() || g2.length() != g3.length()) // this sees if the lengths do not match
     {
         cout << "Genome length does not match." << endl;
     }
     
     else if(u.length() > g1.length() || u.length() > g2.length() || u.length() > g3.length())// this sees if the sequence is smaller
     {
         cout << "Sequence length must be smaller than genome length."<< endl;
     }
     
     // this is calling the function simScore to check the similiarty
     float genome1 = simScore(g1,u);
     float genome2 = simScore(g2,u);
     float genome3 = simScore(g3,u);
     
     if(genome1 == genome2 && genome1 == genome3 && genome2 == genome3)
     {
        cout << "Genome 1 is the best match." << endl;
        cout << "Genome 2 is the best match." << endl;
        cout << "Genome 3 is the best match." << endl;
     }
     
     else if(genome1 ==  genome2 && genome1 >= genome3 && genome2 >= genome3)
     {
        cout << "Genome 1 is the best match." << endl;
        cout << "Genome 2 is the best match." << endl;
     }
     
     else if(genome1 == genome3 && genome1 >= genome2 && genome3 >= genome2)
     {
        cout << "Genome 1 is the best match." << endl;
        cout << "Genome 3 is the best match." << endl;
     }
     
     else if(genome2 == genome3 && genome2 >= genome1 && genome3 >= genome1)
     {
        cout << "Genome 2 is the best match." << endl;
        cout << "Genome 3 is the best match." << endl;
     }
     
     else if( genome1 >= genome2 && genome1 >= genome3)
     {
       cout << "Genome 1 is the best match." << endl;
     }
     
     else if(genome2 >= genome1 && genome2 >= genome3)
     {
       cout << "Genome 2 is the best match." << endl;
     }
     
     else if(genome3 >= genome1 && genome3 >= genome2)
     {
       cout << "Genome 3 is the best match." << endl;
     }
 }
int main()
{
 //1
string g1 = "TAAGGCA";
string g2 = "TCTGGGC";
string g3 = "CTAATAT";
string seq = "AAG";
analyzer(g1,g2,g3,seq);
cout << endl;
//2
string g4 = "AAG";
string g5 = "TGC";
string g6 = "TAC";
string se7q = "CCCCCATAG";

analyzer(g4,g5,g6,se7q);
cout << endl;
//3
string g13 = "CATCATAATTAGCACGTTGTTGGTACCTAGAGACCAACTTAC";
string g23 = "TGGAGACCCACCCGTTACTTCTGACAGACAGAAGTGAGCGAT";
string g33 = "CCTAACGTGTGGCCACGCGGGAGAAGAGGTTTACCATTCTGC";
string seq4 = "TCTTTTA";
analyzer(g13,g23,g3,seq4);
cout << endl;
//4
string g12 = "AAG";
string g22 = "TGC";
string g32 = "TAC";
string seq2 = "CCCCCATAG";

analyzer(g12,g22,g32,seq2);
cout << endl;
//5
analyzer("AC","AC","AC","AC");

//6
analyzer("AAG","TGC","GATTACA","TAC");
}