#include <iostream>
using namespace std;

void classGreeting(int number)
{
     cout << "Hello, CS " << number << " World!" <<endl;
}
int main()
{
   cout << "What is your CS course number? " << endl;
   int number;
   cin >> number;
   classGreeting(number);
}