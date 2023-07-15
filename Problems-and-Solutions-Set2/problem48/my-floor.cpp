#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber()
{
    float Number;

    cout << "Please enter a number:\n";
    cin >> Number;

    return Number;
}
float Myfloor(float Number)
{
    int IntegerPart = (int)Number;

    if (Number > 0)
        return IntegerPart;
    else
        return --IntegerPart;
}

int main()
{
    float Number = ReadNumber();

    cout << "My floor Result : " << Myfloor(Number) << endl;
    cout << "C++ floor Result: " << floor(Number) << endl;
    return 0;
}