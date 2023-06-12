#include <iostream>
#include <cmath>
using namespace std;

float CircleAreaInsceibedInSquare(float A)
{
    const float PI = 3.14;
    return (PI * pow(A, 2)) / 4;
}

int main()
{
    float A, Area;
    cout << "Please enter the side of the square A:\n";
    cin >> A;

    Area = CircleAreaInsceibedInSquare(A);

    cout << "Circle area inscribed in a square is: " << Area << endl;

    return 0;
}