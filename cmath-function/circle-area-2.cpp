#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const float PI = 3.14;
    float Diameter, Area;

    cout << "Please enter the diameter:\n";
    cin >> Diameter;

    Area = (PI * pow(Diameter, 2)) / 4;

    cout << "Circle area through diameter is: " << ceil(Area) << endl;
}