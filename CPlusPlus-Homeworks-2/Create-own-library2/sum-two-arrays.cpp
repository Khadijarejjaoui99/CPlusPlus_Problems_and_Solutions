#include <iostream>
#include "ArrayLib.h"
using namespace std;
using namespace ArrayLib;

int main()
{
    int Array1[100], Array2[100], ArraySum[100], Length1 = 0, Length2 = 0;

    FillArrayWithRandomNumbers(Array1, Length1);
    FillArrayWithRandomNumbers(Array2, Length2);

    return 0;
}