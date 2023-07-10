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

int GetReversedNumber(int Number)
{
    int Remainder = 0, ReversedNumber = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;

        ReversedNumber = ReversedNumber * 10 + Remainder;
    }
    return ReversedNumber;
}

void PrintDigitsInOrder(int Number)
{
    int ReversedNumber = GetReversedNumber(Number);

    int Remainder = 0;

    while (ReversedNumber > 0)
    {
        Remainder = ReversedNumber % 10;

        ReversedNumber /= 10;

        cout << Remainder << endl;
    }
}

int main()
{
    PrintDigitsInOrder(ReadPositiveNumber());
    return 0;
}