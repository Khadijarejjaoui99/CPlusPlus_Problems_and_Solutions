#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadPostiveNumber(string Msg)
{
    int Number;

    do
    {
        cout << Msg << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int GetRandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int Array[100], int &Length)
{
    Length = ReadPostiveNumber("How many elements do you want in the array:");

    for (int i = 0; i < Length; i++)
    {
        Array[i] = GetRandomNumber(1, 100);
    }
}

void PrintArrayData(int Array[100], int Length)
{
    cout << "Array Elements: ";

    for (int i = 0; i < Length; i++)
    {
        cout << Array[i] << " ";
    }

    cout << endl;
}

int GetMinNumberInArray(int Array[100], int Length)
{
    int Min = Array[0];
    for (int i = 0; i < Length; i++)
    {
        if (Array[i] < Min)
        {
            Min = Array[i];
        }
    }

    return Min;
}

int main()
{
    srand((unsigned)time(NULL));

    int Array[100], Length = 0;

    FillArrayWithRandomNumbers(Array, Length);

    PrintArrayData(Array, Length);

    cout << "Min Number is: " << GetMinNumberInArray(Array, Length) << endl;
    return 0;
}