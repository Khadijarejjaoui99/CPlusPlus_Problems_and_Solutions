#include <iostream>
using namespace std;

int ReadPositiveNumber()
{
    int Number;

    do
    {
        cout << "Please enter a positive number:\n";
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int CalculateSumOfDigits(int Number)
{
    int Remainder = 0, Sum = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Sum += Remainder;
        Number /= 10;
    }
    return Sum;
}

int main()
{
    cout << "Sum of Digits = " << CalculateSumOfDigits(ReadPositiveNumber()) << endl;

    return 0;
}