#include <iostream>
using namespace std;

float CalculateRectangleArea(float Width, float Length)
{
    return Width * Length;
}
int main()
{
    float Width, Length;

    cout << "Please enter the width of the rectangle:\n";
    cin >> Width;
    cout << "Please enter the length of the rectangle:\n";
    cin >> Length;

    cout << "Rectangle area is: " << CalculateRectangleArea(Width, Length) << endl;

    return 0;
}