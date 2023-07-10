#include <iostream>
#include <string>
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
    int Remainder = 0;
    string Str;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Str += to_string(Remainder);
        Number /= 10;
    }
    int ReversedNumber = stoi(Str);
    return ReversedNumber;
}

int main()
{
    cout << "Reversed Number = " << GetReversedNumber(ReadPositiveNumber()) << endl;
    return 0;
}