#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Enter a radius: " << endl;
    float radius;
    cin >> radius;
    float volume;
    float surface_area;
    surface_area = (4) * M_PI * pow(radius,2);
    volume = (4.0/3.0) * M_PI * pow(radius, 3);
    cout << "volume: " << volume << endl;
    cout << "surface area: " << surface_area << endl;
    
    //your code goes here
   
}
