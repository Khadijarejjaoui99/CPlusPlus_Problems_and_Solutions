#include <iostream>
#include "ArrayLib.h"
using namespace std;
using namespace ArrayLib;

int MaxNumberInArray(int Array[100], int Length)
{
    int Max = 0;

    for (int i = 0; i < Length; i++)
    {
        if (Array[i] > Max)
            Max = Array[i];
    }

    return Max;
}

int main()
{
    srand((unsigned)time(NULL));

    int Array[100], Length = 0;

    FillArrayWithRandomNumbers(Array, Length);

    PrintArray(Array, Length);

    cout << "Max in Array  = " << MaxNumberInArray(Array, Length) << endl;

    return 0;
}