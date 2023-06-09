#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.14;

    float Radius, Area;

    cout << "Please enter the radius of the circle:\n";
    cin >> Radius;

    Area = PI * Radius * Radius;

    cout << "Circle area is: " << Area << endl;

    return 0;
}