#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const float PI = 3.14;
    float LegLength1, Base, LegLength2, P, Area;

    cout << "Please enter the first leg length of the triangle a:\n";
    cin >> LegLength1;
    cout << "Please enter the base of the triangle b:\n";
    cin >> Base;
    cout << "Please enter the second leg length of the triangle c:\n";
    cin >> LegLength2;

    P = (LegLength1 + Base + LegLength2) / 2;
    float T = LegLength1 * Base * LegLength2 / (4 * sqrt(P * (P - LegLength1) * (P - Base) * (P - LegLength2)));
    Area = PI * pow(T, 2);

    cout << "Circle area circle described around an arbitrary triangle is: " << round(Area) << endl;
}
