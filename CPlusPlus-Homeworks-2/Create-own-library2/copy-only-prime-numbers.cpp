#include <iostream>
#include "ArrayLib.h"
using namespace std;
using namespace ArrayLib;

int main()
{
    int Array[100], Length1 = 0, PrimeNumbersArray[100], Length2 = 0;

    FillArrayWithRandomNumbers(Array, Length1);

    cout << "Array Elements are: \n";
    PrintArray(Array, Length1);

    CopyOnlyPrimeNumbers(Array, PrimeNumbersArray, Length1, Length2);

    cout << "Prime Numbers Array Elements are: \n";
    PrintArray(PrimeNumbersArray, Length2);
    return 0;
}