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

float CircleAreaDescribedAroundArbTriangle(float A, float B, float C)
{
    const float PI = 3.14;

    float P = (A + B + C) / 2;

    float T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));

    float Area = PI * pow(T, 2);

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
    float C = ReadNumber("Please enter leg length C:");

    PrintArea(CircleAreaDescribedAroundArbTriangle(A, B, C));

    return 0;
}