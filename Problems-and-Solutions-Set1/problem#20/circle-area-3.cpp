#include <iostream>
#include <cmath>
using namespace std;

float ReadSquareSide()
{
    float A;

    cout << "Please enter Square Side A:" << endl;
    cin >> A;

    return A;
}

float CircleAreaInscribedInSquare(float A)
{
    const float PI = 3.141593;

    return (PI * pow(A, 2)) / 4;
}

void PrintArea(float Area)
{
    cout << "\nArea = " << Area << endl;
}

int main()
{
    PrintArea(CircleAreaInscribedInSquare(ReadSquareSide()));

    return 0;
}