#include <iostream>
using namespace std;

int ReadPositiveNumber(string Msg)
{
    int Number;

    do
    {
        cout << Msg << endl;
        cin >> Number;

    } while (Number < 0);

    return Number;
}

int GetDigitFrequency(int Number, short Digit)
{
    int Remainder = 0, Counter = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;

        if (Digit == Remainder)
        {
            Counter++;
        }
    }
    return Counter;
}
int main()
{
    int Number = ReadPositiveNumber("Please enter a positive number:");
    short Digit = ReadPositiveNumber("Please enter digit to check:");

    cout << "Digit " << Digit << " Frequency is " << GetDigitFrequency(Number, Digit) << " Time(s)" << endl;
    return 0;
}