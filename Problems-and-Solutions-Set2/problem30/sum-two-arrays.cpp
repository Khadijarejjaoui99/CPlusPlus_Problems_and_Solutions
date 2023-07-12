#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadNumberInRange(int From, int To, string Msg)
{
    int Number = 0;

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

void FillArrayWithRandomNumbers(int Array[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        Array[i] = GetRandomNumber(1, 100);
    }
}

void SumTwoArrays(int Array1[100], int Array2[100], int ArraySum[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        ArraySum[i] = Array1[i] + Array2[i];
    }
}

void PrintArrayData(int Array[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int Array1[100], Array2[100], ArraySum[100], Length = 0;

    Length = ReadNumberInRange(1, 100, "How many elements do you want in the array:");

    FillArrayWithRandomNumbers(Array1, Length);

    FillArrayWithRandomNumbers(Array2, Length);

    SumTwoArrays(Array1, Array2, ArraySum, Length);

    cout << "Array 1 Elements: \n";
    PrintArrayData(Array1, Length);

    cout << "Array 2 Elements: \n";
    PrintArrayData(Array2, Length);

    cout << "Sum of Array 1 and Array 2:\n";
    PrintArrayData(ArraySum, Length);
    return 0;
}