#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float SideLength, Diagonal, Area;

    cout << "Please enter the side length of the rectangle:\n";
    cin >> SideLength;
    cout << "Please enter the diagonal value:\n";
    cin >> Diagonal;

    Area = SideLength * sqrt(pow(Diagonal, 2) - pow(SideLength, 2));

    cout << "Rectangle area through diagonal and side is: " << Area << endl;

    return 0;
}