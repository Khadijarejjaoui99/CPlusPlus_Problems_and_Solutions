#include <iostream>
#include "ArrayLib.h"
using namespace std;
using namespace ArrayLib;

int main()
{
    int Array1[100], Array2[100], ArraySum[100], Length = 0;

    Length = ReadArrayLength();

    FillArrayWithRandomNumbers(Array1, Length);
    FillArrayWithRandomNumbers(Array2, Length);

    SumTwoArrays(Array1, Array2, ArraySum, Length);

    cout << "Array 1 Elements are: ";
    PrintArray(Array1, Length);

    cout << "Array 2 Elements are: ";
    PrintArray(Array2, Length);

    cout << "Array Sum Elements are: ";
    PrintArray(ArraySum, Length);

    return 0;
}