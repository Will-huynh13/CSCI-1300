// Author: CS1300 Fall 2018
// Recitation: 206 - Lucas Hayne
// Cloud 9 Workspace Editor Link: https://ide.c9.io/willhuynh13/csci_1300
// Hmwk 8 Library.cpp file

#include "Library.h"
#include "Book.h"
#include "User.h"
#include <string>
#include <fstream>
using namespace std;

Library::Library()
{
    numBooks = 0;
    numUsers = 0;
}
// this the the split function used in previous homeworks implemented into this code
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

// this is the readBooks function that will take a file open the file and use the split function to split the authors into 
// an array at one index and at another
int Library::readBooks(string file)
{
    ifstream in_file;
    in_file.open(file);
    if(in_file.fail())
    {
        return -1;
    }
    // this is the temp string
    string s;
    // this is the temp array
    string temp2 [2];
    
    while(getline(in_file, s))
    {
        // this is the condition that checks if the numBooks is less than 200 so that it does not go over the size of the array
        if(numBooks < 200)
        {
            split(s,',', temp2, 2);
            book1[numBooks].setAuthor(temp2[0]);
            book1[numBooks].setTitle(temp2[1]);
            numBooks++;
        }
    }
    // returns the number of books and below that closes the file
    return numBooks;
    in_file.close();
}

int Library::readRatings(string file)
{
    ifstream in_file;
    in_file.open(file);
    if(in_file.fail())
    {
        return -1;
    }
    
    string s;
    string temp2 [200];
    
    while(getline(in_file, s))
    {
        if(numUsers < 200)
        {
            split(s,',',temp2, 2);
            user1[numUsers].setUsername(temp2[0]);
            cout << user1[numUsers].getUsername()<<"..." << endl;
            
            int times = split(temp2[1],' ', temp2, 200);
            for(int p = 0; p < times; p++)
            {
                user1[numUsers].setRatingAt(p,stoi(temp2[p]));
            }
             numUsers++;
        }
    }
    return numUsers;
    in_file.close();
}

void Library::printAllBooks()
{
    if(numBooks <= 0)
    {
        cout << "Database has not been fully initialized" << endl;
    }
    else
    {
        cout << "Here is a list of books" << endl;
        for(int i = 0; i < numBooks; i++)
        {
            cout << book1[i].getTitle() << " by " << book1[i].getAuthor() << endl;
        }
    }
}

int Library::getCountReadBooks(string nameofUser)
{
    if(numBooks == 0 || numUsers == 0)
    {
        cout << "Database has not been fully initialized" << endl;
        return -1;
    }
    int check = 0;
    for(int i = 0; i <numUsers;i++)
    {
        if(nameofUser == user1[i].getUsername())
        {
            check = 1;
        }
    }
    if(!check)
    {
        cout<< nameofUser << " does not exist in the database" << endl;
        return-2;
    }
    int name=-1;
    int rated;
    int j=0;
    
    // this for loop checks the array of names
    for(int i = 0; i < numBooks; i++)
    {
        // if the name that we are trying to find matches one of the names in the array, assign the name to i
        if(nameofUser == user1[i].getUsername())
        {
            name = i;
        }
    }
    // this for loop loops through the array and the if checks the rating if it equals 0
    for(int i = 0; i < numBooks; i++)
    {
        if(user1[name].getRatingAt(i)> 0)
        {
            j++;
        }
    }
    rated  = j;
    return rated;
}

double Library::calcAvgRating(string title)
{

    // this condition checks if there is no books, if so then the database does not exist
    if(numBooks == 0)
    {
        cout<<"Database has not been fully initialized" << endl;
        return-1;
    }
    
    int name = -1;
    int rated;

    
    // this is the for loop that checks for title in the array
    for(int i = 0; i < 100; i++)
    {
        // if a tite matches one of the ones in the array, then assign it to name
        if(title == book1[i].getTitle())
        {
            name = i;
        }
    }
    // if it is not in the array, then out put that it is not in the database
    if (name==-1)
    {
        cout << title << " does not exist in the database"<< endl;
        return -2;
    }
    
    // j is just a counter in this case
    int j=0;// k will be assiged to user1
    double k=0.0;
    
    // this forloop checks for the the users
    for(int i = 0; i < numUsers; i++)
    {
        if(user1[i].getRatingAt(name)> 0)
        {
            k+=user1[i].getRatingAt(name);
            j++;
        }
    }
    // this is how to calculate the average
    return k/j;
}

bool Library::addUser(string username)
{
    
    if(numUsers < 200){
        
        int check = 0;
        for(int i = 0; i < numUsers; i++)
        {
        string temp;
        temp = user1[i].getUsername();
        if ((32*(temp[0] <= 90)+temp[0]) == ((32*(username[0] <= 90)+username[0])) && ((temp.length() == username.length())))
        {
            for(int p = 0; p < numUsers; p++)
            {
                if ((32*(temp[p] <= 90)+temp[p]) != ((32*(username[p] <= 90)+username[p])))
                {
                    cout << username << " already exists in the databaase" << endl;
                    break;
                }
                check = (p == temp.length()-1); // this means that if p got the the last index, then it is found
            }
        }
    }
    
    User newUser;
    newUser.setUsername(username);
    user1[numUsers+1] = newUser; //CHECK TO MAKE SURE YOU ARE NOT OVERIDING LAST USER IN USER DATABASE
    numUsers++;
    return true;
        
    }
    
    else{
        
        cout << "Database full"<< endl;
        return false;
    }
}






// bool Library::checkOutBook(string name, string book, int n)
// {
    
//     if (n < 0 || n > 6)
//     {
//         cout << n << " is not valid" << endl;
//     }
    
    
//     string newname;
//     if(numBooks == 0 || numUsers == 0)
//     {
//         cout << "Database has not been initialized" << endl;
//         return false;
//     }
//     else
//     {
//         for(int i = 0; i < numUsers; i++)
//         {
//             newname = user1[i].getUsername();
            
//             if(newname.compare(name) != 0)
//             {
//                 cout << name <<" does not exist in the database" << endl;
//                 return false;
//             }
            
//             else {//the username exists in the database
                
//                 string searchBook;
                
//                 for (int j = 0; j < numBooks; j++){
                    
//                     searchBook = book1[j].getAuthor();
                    
//                     if(searchBook.compare(book) != 0)
//                     {
//                         cout << book <<" does not exist in the database" << endl;
//                         return false;
//                     }
                    
//                     else {
                        
//                         //user1[i] exists and has book book1[j]
//                         user1[i].setRatingAt(j,n);//ASSUMING THE INDEXES BETWEEN THE BOOK ARRAY AND RATINGS ARRAY CORESPOND
//                         return true;
                        
//                     }
                    
//                 } 
                
//             }
//         }
//     }
// }



bool Library:checkOutBook(string username, string title, int newRating){
    
    for(int i = 0; i < numUsers; i++){
        
        if(user1[i].getUsername() == username){//weve found our user hes at index i
            
            for(int j = 0; j < numBooks; j++){
                
                if(book1[j].getTitle == title){
                    
                    if(newRating > 0 && newRating < 6){
                        
                        user1[i].setRatingAt(j,newRating);
                    }
                    
                }
            }
        }
        
    }
    
}






void Library::viewRatings(string file)
{
    if(numBooks == 0 || numUsers == 0)
    {
        cout << "Database has not been fully initialized" << endl;
    }
    
}




void Library::getRecommendations(string name)
{
    if(numBooks == 0 || numUsers == 0)
    {
        cout << "Database has not been fully initialized" << endl;
    }
    
    else {
        
        int foundUser;
        int sumSSD;
        int minSSD = 4239840923849;//change this
        int mostSimilarUserIndex = -1;
        int numBooksRecomended = 0;
        
        for(i = 0; i < numUsers; i++){
            
            if(user1[i] == name)//the user exists hes at index i
            {
                
                
                
                
                //CONSIDER NOTE 
                
                for(j = 0; j < numUsers; j++){//loop through al the users
                
                    sumSSD = 0;
                    
                    for(k = 0; k < numRatings; k++){//loop through all the ratings
                        
                        //SSD MATH
                        sumSSD = sumSSD + ((user1[i].getRatingAt(k) - user1[j].getRatingAt(k)) * (user1[i].getRatingAt(k) - user1[j].getRatingAt(k)))
                        
                        
                    }
                    
                    if(sumSSD < minSSD && sumSSD != 0 ){//if current ssd of user is less then our min ssd and we arent comparing the same users
                        
                        minSSD = sumSSD;
                        mostSimilarUserIndex = j;
                    }
                    //make sure your SSD isnt 0  
                    //minSSD CHECK
                }
                
                
                
                
                
                for(int l = 0; l < numRatings; l++){//loop throgh usegr[i] ratings and find a book he hasnt read
                    
                    if(user1[i].getRatingAt(l) == 0){
                        if(user1[mostSimilarUserIndex].getRatingAt(l) > 2 && numBooksRecomended < 6){
                            
                            //COUT STUFF
                            numBooksRecomended++;
                        }
                    }
                }
                
                
                
                
                
            }
            
            else {
                
                cout << name << " does not exist in database" << endl;
                
            }
            
        }
        
        
        
    }
}

int main()
{
    
}
