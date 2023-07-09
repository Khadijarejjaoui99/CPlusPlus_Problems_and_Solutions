#include <iostream>
using namespace std;

enum enPerfectNotPerfect
{
    Perfect = 1,
    NotPerfect = 2
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

enPerfectNotPerfect CheckPerfect(int Number)
{
    int Sum = 0;

    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0)
        {
            Sum += i;
        }
    }

    if (Number == Sum)
        return enPerfectNotPerfect::Perfect;
    else
        return enPerfectNotPerfect::NotPerfect;
}

void PrintNumberType(int Number)
{
    if (CheckPerfect(Number) == enPerfectNotPerfect::Perfect)
        cout << Number << " is Perfect\n";
    else
        cout << Number << " is Not Perfect\n";
}

int main()
{
    PrintNumberType(ReadPositiveNumber());
    return 0;
}