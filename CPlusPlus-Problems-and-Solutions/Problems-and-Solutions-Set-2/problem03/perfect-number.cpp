#include <iostream>
using namespace std;

enum enNumberType
{
    Perfect,
    NotPerfect
};

int ReadPositiveNumber()
{
    int Num;

    do
    {
        cout << "Please enter a positive number:\n";
        cin >> Num;
    } while (Num <= 0);

    return Num;
}

enNumberType CheckPerfect(int Number)
{
    int Sum = 0;

    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0)
        {
            Sum += i;
        }
    }

    return Number == Sum ? enNumberType::Perfect : enNumberType::NotPerfect;
}

void PrintNumberType(int Number)
{
    if (CheckPerfect(Number) == enNumberType::Perfect)
        cout << Number << " is Perfect\n";
    else
        cout << Number << " is Not Perfect\n";
}

int main()
{
    PrintNumberType(ReadPositiveNumber());
    return 0;
}