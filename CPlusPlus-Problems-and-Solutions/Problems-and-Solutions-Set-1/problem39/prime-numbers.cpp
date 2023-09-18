#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPrimeNotPrime
{
    Prime = 1,
    NotPrime = 2
};

int ReadPositiveNumber()
{
    int Num = 0;
    do
    {
        cout << "Enter a positive number:\n";
        cin >> Num;

    } while (Num <= 0);
    return Num;
}

enPrimeNotPrime CheckPrime(int Number)
{
    if (Number == 0 || Number == 1)
        return enPrimeNotPrime::NotPrime;

    int M = round(Number / 2);

    for (int i = 2; i <= M; i++)
    {
        if (Number % i == 0)
            return enPrimeNotPrime::NotPrime;
    }
    return enPrimeNotPrime::Prime;
}

void PrintNumberType(int Number)
{
    CheckPrime(Number) == enPrimeNotPrime::Prime ? cout << to_string(Number) + " Is Prime\n" : cout << to_string(Number) + " Is Not Prime\n";
}

int main()
{

    PrintNumberType(ReadPositiveNumber());
}