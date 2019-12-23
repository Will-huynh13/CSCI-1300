#include <iostream>
#include <math.h>
using namespace std;

void sphereVolume(float radius_V)
{
    float result = (4.0/3.0) * M_PI * pow(radius_V, 3);
    
    cout << "volume: " << result << endl;
}
void sphereSurfaceArea(float surface)
{
    float result2 = (4) * M_PI * pow(surface,2);
    
    cout << "surface area: " << result2 << endl;
}
int main()
{
    cout << "Enter a radius: " << endl;
    float radius;
    cin >> radius;
    float volume;
    float surface_area;
    sphereVolume(5);
    sphereSurfaceArea(5);
    surface_area = (4) * M_PI * pow(radius,2);
    volume = (4.0/3.0) * M_PI * pow(radius, 3);
    cout << "volume: " << volume << endl;
    cout << "surface area: " << surface_area << endl;
    
    //your code goes here
   
}
