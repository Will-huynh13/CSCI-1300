// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// hmwk 6 part 1


#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;
/*
Algorthm: this program consist of 5 different functions
1. the first function will use a spliter (dilimiter) to sparate the authors and the book titles into arrays
2. the second function will use the function spliter to remove the spaces and commas from the rating stream and put them into arrays
3. the third function will print all the books in the array
4. the forth function will look up a user an compare it to the array and then look at the ratings and how many books they read
5. the last function will calculate the average for the ratings for each book.

Keynotes: ifstream is used to stream the file, there will be a condtion that checks if it passes the opening test.
getline() function can be used to replace the split function 


*/

/* split function
 * the function to split the given string into array of string with respect to a delimiter
 *
 * @param : string , the string we are going to split
 * @param : char, the delimiter
 * @param : string array, the array of string we save after spliting
 * @param : int, size of the  indicates the maximum number of split-apart string pieces
*/
 int split (string str, char c, string array[], int size)
 {
    if (str.length() == 0) {
         return 0;
     }
    string word = "";
    int count = 0;
    str = str + c;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == c)
        {
            if (word.length() == 0)
                continue;
            array[count++] = word;
            word = "";
        } else {
            word = word + str[i];
        }
    }
    return count ;
 }

/* readBooks function
 * the function reads a book file from the text into book and author arrays
 *
 * @param: string, the name of the file to be read
 * @param: string array, titles
 * @param: string array, authors
 * @param: int, the number of books currently stored in the arrays
 * @param: int, capacity of the authors/titles arrays [assume to be 50]
 * @return: the total number of books in total
 */

int readBooks(string books, string titles[], string authors[], int numberOfBooks, int capacity)
{
    // this line is opening the file
    ifstream in_file;
    in_file.open(books);
    numberOfBooks = 0;
    if(in_file.fail())
    {
        // this is printed if there are no books in the database
        cout << "No books saved to the database" << endl;
        return -1;
    }
    else
    {
        // this is the temp string variables that will stream to the variables
        string temp;
        string temp2 [2];
        int i = 0;
        // this line will get the line from the books file and assign it to the temp variable
        while(getline(in_file, temp))
        {
            // this allows me to change the string that the getline gives
            stringstream ss (temp);
            // using the split function, it searches for the ,
            split(temp, ',', temp2, 2);
            // reassigns the temp strings to the arrays
            authors[i] = temp2[0];
            titles[i] = temp2[1];
            
            i++;
        }
        numberOfBooks=i;
    }

    cout << "Total books in the database: " << numberOfBooks << endl;
    return numberOfBooks;
    in_file.close();
}
    


/* readRatings function
 * Read the user ratings from the file and store them
 * into users array and ratings array
 *
 * @param: string, the name of the file to be read
 * @param: string array, usernames
 * @param: 2D int array, list of ratings for each user (first index specifies user)
 * @param: int, the number of users currently stored in the array
 * @param: int, row capacity of the 2D array (convention: array[row][column]) [assume to be 100]
 * @param: int, column capacity of the 2D array [assume to be 50]
 * @return: the number of users in total
 */

 int readRatings(string ratings, string usernames[], int ratingarray[][50], int numberofU, int rowCap, int columnCap)
{
    // opens the file
    ifstream in_file2;
    // the string ratings is opened
    in_file2.open(ratings);
    string temp3;
    string temp4;
    int i = 0;

    // if the file fails to open, then ths will run
    if(in_file2.fail())
    {
        cout << "No users saved to database" << endl;
        return -1;
    }
    else 
    {
        // this while loop uses getline to separate the ratings in to an array
        while(getline(in_file2,temp3))
        {
            stringstream ss2 (temp3);
            // getline is used instead of split
            getline(ss2,temp4,',');
            usernames[i] = temp4;
            int j=0;
            // another getline instead of split
            while(getline(ss2,temp4,' '))
            {
                // using the stoi to convert them into integers
                ratingarray[i][j] = stoi(temp4);
                j++;
            }
            cout << usernames[i] << "..." << endl;
            i++;
        }
    }
    numberofU = i;
    cout << "Total users in the database: " << numberofU << endl;
    return i;
}

void  printAllBooks(string titles[], string authors[], int numBooks)
{
    if(numBooks == -1)
    {
        cout << "No books are stored" << endl;
    }
    else
    {
        cout << "Here is a list of books" << endl;
        // this for loop loops through the book library
        for(int i = 0; i < numBooks; i++)
        {
            cout << titles[i] << " by " << authors[i] << endl;
        }
    }
}

int getUserReadCount(string nameofUser, string AllUsers[], int AllRatings[][50], int nUsers, int nBooks)
{
    int  name=-1;
    int rated;
    int j=0;
    
    // this for loop checks the array of names
    for(int i = 0; i < 100; i++)
    {
        // if the name that we are trying to find matches one of the names in the array, assign the name to i
        if(nameofUser == AllUsers[i])
        {
            name = i;
        }
    }
    if (name==-1)
    {
        // if the name is not in the array, then print this
        cout << nameofUser << " does not exist in the database" << endl;
        return -1;
    }
    // this for loop loops through the array and the if checks the rating if it equals 0
    for(int i = 0; i < 50; i++)
    {
        if(AllRatings[name][i] != 0)
        {
            j++;
        }
    }
    rated  = j;
    // this checks if the user in the array read a certain amount of books
    if (nUsers == -1|| nBooks == -1)
    {
        cout << nameofUser << " rated 0 books" << endl;
        return -1;
    }
    cout << nameofUser << " rated " << rated << " books" << endl;
    
    return rated;
}

int calcAvgRating(string title, string titles[], int AllRatings[][50], int Users, int Books)
{
    // variables that are used in the function
    int name = -1;
    int rated;
    int j=0;
    double k=0.0;
    double total = 0.0;
    
    // this is the for loop that checks for title in the array
    for(int i = 0; i < 100; i++)
    {
        // if a tite matches one of the ones in the array, then assign it to name
        if(title == titles[i])
        {
            name = i;
        }
    }
    // if it is not in the array, then out put that it is not in the database
    if (name==-1)
    {
        cout << title << " does not exist in our database" << endl;
        return -1;
    }
    
    // this is the loop that checks the users
    for(int i = 0; i < 86; i++)
    {
        if(AllRatings[i][name] != 0)
        {
            k+=AllRatings[i][name];
            j++;
        }
    }
    // this is how to calculate the average
    total = k/j;
    
    cout << "The average rating for " << title << " is ";
    // this is how to format the decimals
    printf("%.2f\n", total);
    return total;
}
    






/* displayMenu:
 * displays a menu with options
 * DO NOT MODIFY THIS FUNCTION
 */
void displayMenu(){
  cout << "Select a numerical option:" << endl;
  cout << "======Main Menu=====" << endl;
  cout << "1. Read book file" << endl;
  cout << "2. Read user file" << endl;
  cout << "3. Print book list" << endl;
  cout << "4. Find number of books user rated" << endl;
  cout << "5. Get average rating" << endl;
  cout << "6. Quit" << endl;
}


int main(int argc, char const *argv[]) {
    string choice;
    int numBooks = -1;
    int numUsers = -1;
    string b;
    string c;
    string d;
    string e;
    int rating[100][50];
    string titles[50];
    string authors[50];
    string users[100];
    

    while (choice != "6") {
            displayMenu();
            getline(cin, choice);
            switch (stoi(choice)) {
                case 1:
                    // read book file
                    cout << "Enter a book file name:" << endl;
                    getline(cin, b);
                    numBooks=readBooks(b,titles,authors, numBooks, 50);
                
                    cout << endl;
                    break;

                case 2:
                    // read user file
                    cout << "Enter a rating file name:" << endl;
                    getline(cin,c);
                    numUsers = readRatings(c,users, rating,numUsers, 100,50);
                    cout << endl;
                    break;

                case 3:
                    // print the list of the books

                    printAllBooks(titles,authors,numBooks);
                    cout<<endl;
                    break;

                case 4:
                    // find the number of books user read
                    cout << "Enter username:" << endl;
                    getline(cin, d);
                    getUserReadCount(d,users,rating,numUsers,numBooks);
                    
                    cout << endl;
                    break;

                case 5:
                    // get the average rating of the book
                    cout << "Enter book title:" << endl;
                    
                    getline(cin, e);
                    calcAvgRating(e, titles,rating, numUsers, numBooks);
                    cout << endl;
                    break;
                case 6:
                    // quit
                    cout << "good bye!" << endl;
                    break;

                default:
                    cout << "invalid input" << endl<<endl;
            }
    }

    return 0;
}
