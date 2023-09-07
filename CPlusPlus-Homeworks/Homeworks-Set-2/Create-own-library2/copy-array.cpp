#include <iostream>
#include "ArrayLib.h"
using namespace std;
using namespace ArrayLib;

int main()
{
    srand((unsigned)time(NULL));

    int Array1[100], Length1 = 0, Array2[100], Length2 = 0;

    Length1 = ReadArrayLength();

    FillArrayWithRandomNumbers(Array1, Length1);

    cout << "Array 1 Elements are: ";
    PrintArray(Array1, Length1);

    CopyArrayElements(Array1, Array2, Length1, Length2);

    cout << "Array 2 Elements are: ";
    PrintArray(Array2, Length2);
    return 0;
}