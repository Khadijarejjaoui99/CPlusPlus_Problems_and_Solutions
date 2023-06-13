#include <iostream>
#include <cmath>
using namespace std;

float CircleAreaAlongCircumference(float Circumference)
{
    const float PI = 3.14;

    return pow(Circumference, 2) / (4 * PI);
}

int main()
{
    float Circumference, Area;

    cout << "Please enter circumference:\n";
    cin >> Circumference;

    Area = CircleAreaAlongCircumference(Circumference);

    cout << "Circle area along circumference is: " << Area << endl;

    return 0;
}