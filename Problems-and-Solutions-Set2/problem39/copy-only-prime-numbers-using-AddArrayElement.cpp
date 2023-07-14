#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
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

int GetRandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int Array[100], int &Length)
{
    Length = ReadNumberInRange(1, 100, "How many numbers do you want in the array:");

    for (int i = 0; i < Length; i++)
        Array[i] = GetRandomNumber(1, 100);
}

void AddArrayElement(int Number, int Array[100], int &Length)
{
    Length++;

    Array[Length - 1] = Number;
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
void CopyPrimeNumbers(int ArraySource[100], int ArrayDestination[100], int Length1, int &Length2)
{
    for (int i = 0; i < Length1; i++)
    {
        if (CheckPrime(ArraySource[i]) == enPrimeNotPrime::Prime)
            AddArrayElement(ArraySource[i], ArrayDestination, Length2);
    }
}
void PrintArrayData(int Array[100], int Length)
{
    for (int i = 0; i < Length; i++)
        cout << Array[i] << " ";

    cout << endl;
}
int main()
{
    srand((unsigned)time(NULL));

    int Array1[100], Length1 = 0, Array2[100], Length2 = 0;

    FillArrayWithRandomNumbers(Array1, Length1);

    CopyPrimeNumbers(Array1, Array2, Length1, Length2);

    cout << "Array 1 Elements are: ";

    PrintArrayData(Array1, Length1);

    cout << "Array 2 Prime Elements are: ";
    PrintArrayData(Array2, Length2);

    return 0;
}