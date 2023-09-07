#include <iostream>
#include "ArrayLib.h"
using namespace std;
using namespace ArrayLib;

int main()
{
    int Array[100], Length = 0;

    Length = ReadArrayLength();

    FillArrayFrom1toN(Array, Length);

    cout << "Array Elements before Shuffling: ";
    PrintArray(Array, Length);

    ShuffleArray(Array, Length);

    cout << "Array Elements After Shuffling: ";
    PrintArray(Array, Length);
    return 0;
}