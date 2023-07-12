#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enPrimeNotPrime
{
    Prime,
    NotPrime
};

int ReadNumberInRange(int From, int To, string Msg)
{
    int Number;

    do
    {
        cout << Msg << endl;
        cin >> Number;
    } while (Number < From || Number > To);

    return Number;
}

int GetRandomeNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int Array[100], int &Length)
{
    Length = ReadNumberInRange(1, 100, "How many elements do you want in the array:");

    for (int i = 0; i < Length; i++)
    {
        Array[i] = GetRandomeNumber(1, 100);
    }
}

enPrimeNotPrime CheckPrime(int Number)
{
    int M = round(Number / 2);

    for (int i = 2; i <= M; i++)
    {
        if (Number % i == 0)
            return enPrimeNotPrime::NotPrime;
    }
    return enPrimeNotPrime::Prime;
}

void CopyOnlyPrimeNumbers(int Array[100], int ArrayCopy[100], int Length1, int &Length2)
{
    int Counter = 0;

    for (int i = 0; i < Length1; i++)
    {
        if (CheckPrime(Array[i]) == enPrimeNotPrime::Prime)
        {
            ArrayCopy[Counter] = Array[i];
            Counter++;
        }
    }

    Length2 = Counter;
}

void PrintArrayData(int Arr[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int Array[100], ArrayCopyPrime[100], Length1 = 0, Length2 = 0;

    FillArrayWithRandomNumbers(Array, Length1);

    CopyOnlyPrimeNumbers(Array, ArrayCopyPrime, Length1, Length2);

    cout << "Array Elements are: ";
    PrintArrayData(Array, Length1);

    cout << "Array Copy Prime Elements are: ";
    PrintArrayData(ArrayCopyPrime, Length2);
    return 0;
}