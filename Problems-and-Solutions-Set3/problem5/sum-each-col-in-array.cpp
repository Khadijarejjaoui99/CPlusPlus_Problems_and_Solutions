#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int GetRandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void FillMatrixWithRandomNumbers(int Matrix[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Matrix[i][j] = GetRandomNumber(1, 100);
        }
    }
}

void PrintMatrix(int Matrix[3][3], short Rows, short Cols)
{
    cout << "The following is 3x3 matrix:\n";

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << Matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int GetColSum(int Matrix[3][3], short Rows, short ColNumber)
{
    int Sum = 0;

    for (short i = 0; i < Rows; i++)
    {
        Sum += Matrix[i][ColNumber];
    }
    return Sum;
}

void SumEachColInArray(int Matrix[3][3], int ArraySum[3], short Rows, short Cols)
{
    for (int j = 0; j < Cols; j++)
    {
        ArraySum[j] = GetColSum(Matrix, Rows, j);
    }
}

void PrintArrayColSum(int ArraySum[3], int Length)
{
    cout << "The followings are the sum of each col in the matrix:\n";

    for (short i = 0; i < Length; i++)
    {
        cout << "Col " << i + 1 << " Sum = " << ArraySum[i] << endl;
    }
}

int main()
{

    srand((unsigned)time(NULL));

    int Matrix[3][3], ArraySum[3];

    FillMatrixWithRandomNumbers(Matrix, 3, 3);

    PrintMatrix(Matrix, 3, 3);

    SumEachColInArray(Matrix, ArraySum, 3, 3);

    PrintArrayColSum(ArraySum, 3);

    return 0;
}