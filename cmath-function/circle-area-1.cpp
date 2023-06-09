#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const float PI = 3.14;
    float Radius, Area;

    cout << "Please enter the radius of the circle:\n";
    cin >> Radius;

    Area = PI * pow(Radius, 2);

    cout << "Circle area is: " << ceil(Area) << endl;

    return 0;
}