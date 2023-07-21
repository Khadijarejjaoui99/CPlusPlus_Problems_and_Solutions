#include <iostream>
#include "ArrayLib.h"
using namespace std;
using namespace ArrayLib;

int main()
{
    int Array[100], ArrayRev[100], Length = 0;

    Length = ReadArrayLength();

    FillArrayWithRandomNumbers(Array, Length);

    CopyReversedArray(Array, ArrayRev, Length);

    cout << "Array Elements: ";
    PrintArray(Array, Length);

    cout << "Reversed Array Elements: ";
    PrintArray(ArrayRev, Length);
    return 0;
}