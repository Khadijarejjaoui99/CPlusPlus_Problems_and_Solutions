#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const float PI = 3.14;
    float SquareSide, Area;

    cout << "Please enter the length of the square side: \n";
    cin >> SquareSide;

    Area = (PI * pow(SquareSide, 2)) / 4;

    cout << "Circle area inscribed in a square is: " << ceil(Area) << endl;

    return 0;
}