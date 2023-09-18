#include <iostream>
#include <cmath>
using namespace std;

float ReadRadius()
{
    float R;

    cout << "Please enter Radius R:" << endl;
    cin >> R;

    return R;
}

float CalculateCircleArea(float R)
{
    const float PI = 3.141593;

    return PI * pow(R, 2);
}

void PrintArea(float Area)
{
    cout << "\nArea = " << Area << endl;
}

int main()
{
    PrintArea(CalculateCircleArea(ReadRadius()));

    return 0;
}