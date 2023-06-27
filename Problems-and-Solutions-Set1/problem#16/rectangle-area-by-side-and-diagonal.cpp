#include <iostream>
#include <cmath>
using namespace std;

void ReadNumbers(float &A, float &D)
{
    cout << "Please enter Side A:\n";
    cin >> A;
    cout << "Please enter Diagonal D:\n";
    cin >> D;
}

float RectangleAreaBySideAndDiagonal(float A, float D)
{
    return A * sqrt(pow(D, 2) - pow(A, 2));
}

void PrintArea(float Area)
{
    cout << "Area = " << Area << endl;
}

int main()
{
    float A, D;

    ReadNumbers(A, D);

    PrintArea(RectangleAreaBySideAndDiagonal(A, D));

    return 0;
}