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

void AddArrayElement(int Number, int Array[100], int &Length)
{
    Length++;

    Array[Length - 1] = Number;
}

void CopyArrayUsingAddArrayElemet(int Array1[100], int Array2[100], int Length1, int &Length2)
{
    for (int i = 0; i < Length1; i++)
    {
        AddArrayElement(Array1[i], Array2, Length2);
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

    int Array1[100], Array2[100], Length1 = 0, Length2 = 0;

    Length1 = ReadNumberInRange(1, 100, "How many elements do you want in the array:");

    FillArrayWithRandomNumbers(Array1, Length1);

    CopyArrayUsingAddArrayElemet(Array1, Array2, Length1, Length2);

    cout << "Array 1 Elements: ";
    PrintArrayData(Array1, Length1);

    cout << "Array 2 Elements: ";
    PrintArrayData(Array2, Length2);
    return 0;
}
