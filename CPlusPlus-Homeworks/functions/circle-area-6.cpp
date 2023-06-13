#include <iostream>
#include <cmath>
using namespace std;

float CircleAreaDescribedAroundArbTriangle(float a, float b, float c)
{
    const float PI = 3.14;
    float P, T, Area;

    P = (a + b + c) / 2;
    T = ((a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c))));
    Area = PI * pow(T, 2);

    return Area;
}
int main()
{
    float a, b, c, Area;

    cout << "Please enter the value of the triangle leg a:\n";
    cin >> a;
    cout << "Please enter the value of the triangle base b:\n";
    cin >> b;
    cout << "Please enter the value of the triangle leg c:\n";
    cin >> c;

    Area = CircleAreaDescribedAroundArbTriangle(a, b, c);

    cout << "circle area of the circle described around an arbitrary triangle is: " << Area << endl;

    return 0;

    return 0;
}