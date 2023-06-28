#include <iostream>
#include <cmath>
using namespace std;

float ReadCircumference()
{
    float L;

    cout << "Please enter Circumference L:" << endl;
    cin >> L;

    return L;
}

float CircleAreaAlongCircumference(float L)
{
    const float PI = 3.14;

    return pow(L, 2) / (4 * PI);
}

void PrintArea(float Area)
{
    cout << "\nArea = " << Area << endl;
}

int main()
{
    PrintArea(CircleAreaAlongCircumference(ReadCircumference()));

    return 0;
}