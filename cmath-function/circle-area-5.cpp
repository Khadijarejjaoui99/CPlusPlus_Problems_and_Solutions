#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const float PI = 3.14;
    float LegLength, Base, Area;

    cout << "Please enter the leg length of the triangle:\n";
    cin >> LegLength;
    cout << "Please enter the base of the triangle:\n";
    cin >> Base;

    Area = PI * (pow(Base, 2) / 4) * ((2 * LegLength - Base) / (2 * LegLength + Base));

    cout << "Circle area inscribed in an isosceles triangle is: " << floor(Area) << endl;

    return 0;
}