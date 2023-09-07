#include <iostream>
#include <cmath>
using namespace std;

float CalculateCircleArea(float Radius)
{
    const float PI = 3.14;

    return PI * pow(Radius, 2);
}
int main()
{
    float Radius, Area;

    cout << "Please enter the value of the radius:\n";
    cin >> Radius;

    Area = CalculateCircleArea(Radius);

    cout << "Circle area is: " << Area << endl;

    return 0;
}