#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

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
    Length = ReadNumberInRange(1, 100, "How many elements do you want in the array:");

    for (int i = 0; i < Length; i++)
    {
        Array[i] = GetRandomNumber(1, 100);
    }
}

void PrintArray(int Array[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;
}

void CopyArray(int Array[100], int ArrayCopy[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        ArrayCopy[i] = Array[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int Array[100], ArrayCopy[100], Length = 0;

    FillArrayWithRandomNumbers(Array, Length);

    CopyArray(Array, ArrayCopy, Length);

    cout << "Array Elements are: ";
    PrintArray(Array, Length);

    cout << "Array Copy Elements are: ";
    PrintArray(ArrayCopy, Length);
    return 0;
}