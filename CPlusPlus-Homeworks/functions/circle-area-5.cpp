#include <iostream>
#include <cmath>
using namespace std;

float CircleAreaInscribedInIsosTriangle(float a, float b)
{
    const float PI = 3.14;
    float Area;

    Area = PI * pow(b, 2) / 4 * ((2 * a - b) / (2 * a + b));

    return Area;
}
int main()
{
    float a, b, Area;

    cout << "Please enter value of the tringle leg a:\n";
    cin >> a;
    cout << "Please enter value of the tringle base b:\n";
    cin >> b;

    Area = CircleAreaInscribedInIsosTriangle(a, b);

    cout << "Circle area inscribed in an isosceles triangle is: " << Area << endl;

    return 0;
}