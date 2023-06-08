#include <iostream>
using namespace std;

int main()
{
    float Base, Height, Area;

    cout << "Please enter the base of the triangle: \n";
    cin >> Base;
    cout << "Please enter the height of the triangle: \n";
    cin >> Height;

    Area = (Base / 2) * Height;
    cout << "Triangle area is: " << Area << endl;
}