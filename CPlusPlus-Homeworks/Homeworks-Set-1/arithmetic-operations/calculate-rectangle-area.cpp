#include <iostream>
using namespace std;

int main()
{
    float Width, Length, Area;

    cout << "Please enter the width of the rectangle: \n";
    cin >> Width;
    cout << "Please enter the length of the rectangle: \n";
    cin >> Length;

    Area = Width * Length;

    cout << "Rectangle area is: " << Area << endl;

    return 0;
}