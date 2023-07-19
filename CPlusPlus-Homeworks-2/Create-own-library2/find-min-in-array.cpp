#include <iostream>
#include "ArrayLib.h"
using namespace std;
using namespace ArrayLib;

int MinNumberInArray(int Array[100], int Length)
{
    int Min = Array[0];

    for (int i = 0; i < Length; i++)
    {
        if (Array[i] < Min)
            Min = Array[i];
    }

    return Min;
}

int main()
{
    srand((unsigned)time(NULL));

    int Array[100], Length = 0;

    FillArrayWithRandomNumbers(Array, Length);

    PrintArray(Array, Length);

    cout << "Min in Array  = " << MinNumberInArray(Array, Length) << endl;

    return 0;
}