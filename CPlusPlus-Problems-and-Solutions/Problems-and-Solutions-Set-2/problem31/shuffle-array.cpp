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

void FillArrayFrom1ToN(int Array[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        Array[i] = i + 1;
    }
}

void PrintArrayData(int Array[100], int Length)
{
    for (int i = 0; i < Length; i++)
        cout << Array[i] << " ";

    cout << endl;
}

void Swap(int &A, int &B)
{
    int Temp = A;
    A = B;
    B = Temp;
}

int GetRandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void ShuffleArray(int Array[100], int Length)
{
    for (int i = 0; i < Length; i++)
        Swap(Array[GetRandomNumber(1, Length) - 1], Array[GetRandomNumber(1, Length) - 1]);
}

int main()
{
    srand((unsigned)time(NULL));

    int Array[100], Length = 0;

    Length = ReadNumberInRange(1, 100, "How many elements do you want in the array:");

    FillArrayFrom1ToN(Array, Length);

    cout << "Array Before Shuffle:\n";
    PrintArrayData(Array, Length);

    ShuffleArray(Array, Length);

    cout << "Array After Shuffle:\n";
    PrintArrayData(Array, Length);
    return 0;
}