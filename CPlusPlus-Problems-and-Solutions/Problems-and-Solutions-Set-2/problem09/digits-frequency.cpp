#include <iostream>
using namespace std;

int ReadPositiveNumber()
{
    int Number;

    do
    {
        cout << "Please enter a postive number:\n";
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int GetDigitFrequency(short DigitToCheck, int Number)
{
    int Counter = 0, Remainder = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;

        if (DigitToCheck == Remainder)
        {
            Counter++;
        }
    }
    return Counter;
}

void PrintAllDigitsFrquency(int Number)
{
    short DigitFrequency = 0;

    for (int i = 0; i <= 9; i++)
    {
        DigitFrequency = GetDigitFrequency(i, Number);

        if (DigitFrequency > 0)
            cout << "Digit " << i << " Frequency is " << DigitFrequency << " Time(s)" << endl;
    }
}

int main()
{
    PrintAllDigitsFrquency(ReadPositiveNumber());
    return 0;
}