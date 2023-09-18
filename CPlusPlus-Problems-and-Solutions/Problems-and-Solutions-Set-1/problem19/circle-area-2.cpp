#include <iostream>
#include <cmath>
using namespace std;

float ReadDiameter()
{
    float D;

    cout << "Please enter Diameter D:" << endl;
    cin >> D;

    return D;
}

float CircleAreaThroughDiameter(float D)
{
    const float PI = 3.141593;

    return (PI * pow(D, 2)) / 4;
}

void PrintArea(float Area)
{
    cout << "\nArea = " << Area << endl;
}

int main()
{
    PrintArea(CircleAreaThroughDiameter(ReadDiameter()));

    return 0;
}