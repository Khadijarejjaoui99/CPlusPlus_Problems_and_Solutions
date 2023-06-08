#include <iostream>
using namespace std;

int main()
{
    float SquareSide, Area;
    const float PI = 3.14;

    cout << "Please enter the side of the square:\n";
    cin >> SquareSide;

    Area = (PI * SquareSide * SquareSide) / 4;

    cout << "Circle area inscribed in a square is: " << Area << endl;

    return 0;
}