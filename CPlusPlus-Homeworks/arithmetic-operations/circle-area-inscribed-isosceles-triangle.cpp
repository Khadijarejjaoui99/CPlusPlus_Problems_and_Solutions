#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.14;
    float LegLength, Base, Area;

    cout << "Please enter the leg length of the isosceles triangle:\n";
    cin >> LegLength;
    cout << "Please enter the base of the isosceles triangle:\n";
    cin >> Base;

    Area = PI * ((Base * Base) / 4) * ((2 * LegLength - Base) / (2 * LegLength + Base));

    cout << "Circle area inscribed in an isosceles triangle is: " << Area << endl;

    return 0;
}