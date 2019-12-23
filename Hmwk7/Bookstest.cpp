#include "Book.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Books Book1;
    
    cout << Book1.getTitle() << endl;
    Book1.setTitle("Hello");
    cout << Book1.getTitle() << endl;
    
}

