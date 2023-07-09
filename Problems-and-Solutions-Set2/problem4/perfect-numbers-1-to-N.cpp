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

bool IsPerfectNumber(int Number)
{
    int Sum = 0;

    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0)
            Sum += i;
    }

    return Number == Sum;
}

void PrintPerfectNumbersFrom1ToN(int Number)
{
    cout << "Perfect Numbers From " << 1 << " To " << Number << " are:\n";
    for (int i = 1; i <= Number; i++)
    {
        if (IsPerfectNumber(i))
            cout << i << endl;
    }
}

int main()
{
    PrintPerfectNumbersFrom1ToN(ReadPositiveNumber());
    return 0;
}