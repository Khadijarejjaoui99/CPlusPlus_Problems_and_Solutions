#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber(string Msg)
{
    float Num;

    cout << Msg << endl;
    cin >> Num;

    return Num;
}

float CircleAreaInscribedByIsosTriangle(float A, float B)
{
    const float PI = 3.14;

    float Area = (PI * pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));

    return Area;
}

void PrintArea(float Area)
{
    cout << "\nArea = " << Area << endl;
}

int main()
{
    float A = ReadNumber("Please enter leg length A:");
    float B = ReadNumber("Please enter Base B:");

    PrintArea(CircleAreaInscribedByIsosTriangle(A, B));

    return 0;
}