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

float Myabs(float Number)
{
    if (Number < 0)
        return Number * -1;
    else
        return Number;
}

int main()
{
    float Number = ReadNumber();

    cout << "My abs Result : " << Myabs(Number) << endl;
    cout << "C++ abs Result: " << abs(Number) << endl;
    return 0;
}