#include <iostream>
#include <cmath>
using namespace std;

enum enPrimeNotPrime
{
    Prime = 1,
    NotPrime = 2
};

int ReadPositiveNumber()
{
    int Num;

    do
    {
        cout << "Please enter a positive number:\n";
        cin >> Num;
    } while (Num <= 0);
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
void PrintPrimeNumbersFrom1ToN(int Number)
{
    cout << "\n Prime Numbers From 1 To " << Number << " are:\n";
    for (int i = 1; i <= Number; i++)
    {
        if (CheckPrime(i) == enPrimeNotPrime::Prime)
            cout << i << endl;
    }
}

int main()
{
    PrintPrimeNumbersFrom1ToN(ReadPositiveNumber());
    return 0;
}