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
float GetFractionPart(float Number)
{
    return Number - (int)Number;
}
float Myfloor(float Number)
{
    int IntegerPart = (int)Number;
    float FractionPart = GetFractionPart(Number);

    if (abs(FractionPart) > 0)
    {
        if (Number > 0)
            return IntegerPart;
        else
            return --IntegerPart;
    }
    else
        return Number;
}

int main()
{
    float Number = ReadNumber();

    cout << "My floor Result : " << Myfloor(Number) << endl;
    cout << "C++ floor Result: " << floor(Number) << endl;
    return 0;
}