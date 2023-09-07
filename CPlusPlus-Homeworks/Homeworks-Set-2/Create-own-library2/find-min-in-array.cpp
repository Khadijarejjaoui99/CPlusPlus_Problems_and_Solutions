#include <iostream>
#include "ArrayLib.h"
using namespace std;
using namespace ArrayLib;

int main()
{
    srand((unsigned)time(NULL));

    int Array[100], Length = 0;

    Length = ReadArrayLength();

    FillArrayWithRandomNumbers(Array, Length);

    PrintArray(Array, Length);

    cout << "Min in Array  = " << MinNumberInArray(Array, Length) << endl;

    return 0;
}