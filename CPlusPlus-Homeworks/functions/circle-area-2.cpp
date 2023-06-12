#include <iostream>
#include <cmath>
using namespace std;

float CircleAreaThroughDiagonal(float Diagonal)
{
    const float PI = 3.14;

    return (PI * pow(Diagonal, 2)) / 4;
}

int main()
{
    float Diagonal, Area;

    cout << "Please enter the diagonal:\n";
    cin >> Diagonal;

    Area = CircleAreaThroughDiagonal(Diagonal);

    cout << "Circle area through diameter: " << Area << endl;

    return 0;
}