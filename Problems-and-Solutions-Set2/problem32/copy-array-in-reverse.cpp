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
    Length = ReadNumberInRange(1, 100, "How many elements do you want in the array");

    for (int i = 0; i < Length; i++)
    {
        Array[i] = GetRandomNumber(1, 100);
    }
}

void CopyArrayInReverseOrder(int Array[100], int ArrayRev[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        ArrayRev[i] = Array[Length - 1 - i];
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

    int Array[100], Length = 0, ArrayRev[100];

    FillArrayWithRandomNumbers(Array, Length);

    CopyArrayInReverseOrder(Array, ArrayRev, Length);

    cout << "Array 1 Elements are: \n";
    PrintArrayData(Array, Length);

    cout << "Reversed Array Elements are: \n";
    PrintArrayData(ArrayRev, Length);

    return 0;
}