#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const float PI = 3.14;
    float Circumference, Area;

    cout << "Please enter the circumference:\n";
    cin >> Circumference;

    Area = pow(Circumference, 2) / (4 * PI);

    cout << "Circle area along the circumference is: " << floor(Area) << endl;

    return 0;
}