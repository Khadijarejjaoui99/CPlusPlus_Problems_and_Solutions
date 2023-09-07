#include <iostream>
#include <cmath>
using namespace std;

float RectAreaByDiagonalAndSide(float a, float d)
{
    return a * sqrt(pow(d, 2) - pow(a, 2));
}
int main()
{
    float a, d, Area;

    cout << "Please enter the value of the side a:\n";
    cin >> a;
    cout << "Please enter the value of the diagonal d:\n";
    cin >> d;

    Area = RectAreaByDiagonalAndSide(a, d);

    cout << " rectangle area through diagonal and side is: " << Area << endl;
}