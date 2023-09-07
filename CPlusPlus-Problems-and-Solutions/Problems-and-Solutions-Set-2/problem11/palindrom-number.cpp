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

bool IsPalindrome(int Number)
{
    return Number == GetReversedNumber(Number);
}

void PrintNumberType(int Number)
{
    if (IsPalindrome(Number))
        cout << Number << " is a Palindrome Number\n";
    else
        cout << Number << " is Not a Palindrome Number\n";
}

int main()
{
    PrintNumberType(ReadPositiveNumber());
    return 0;
}