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

float CircleAreaInscribedBySquare(float A)
{
    const float PI = 3.14;

    return (PI * pow(A, 2)) / 4;
}

void PrintArea(float Area)
{
    cout << "\nArea = " << Area << endl;
}

int main()
{
    PrintArea(CircleAreaInscribedBySquare(ReadSquareSide()));

    return 0;
}