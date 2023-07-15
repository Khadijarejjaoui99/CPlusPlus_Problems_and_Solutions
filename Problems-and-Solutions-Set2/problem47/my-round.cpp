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
float Myround(float Number)
{
    int IntegerPart = (int)Number;
    float FractionsPart = GetFractionPart(Number);
    if (abs(FractionsPart) >= 0.5)
    {
        if (Number > 0)
            return ++IntegerPart;
        else
            return --IntegerPart;
    }
    else
        return IntegerPart;
}

int main()
{
    float Number = ReadNumber();

    cout << "My round Result : " << Myround(Number) << endl;
    cout << "C++ round Result: " << round(Number) << endl;
    return 0;
}