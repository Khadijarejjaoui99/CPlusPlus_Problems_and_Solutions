#include <iostream>
#include <cstdlib>
#include <ctime>
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
            Matrix[i][j] = GetRandomNumber(1, 10);
        }
    }
}

void PrintMatrix(int Matrix[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %0*d\t", 2, Matrix[i][j]);
        }
        cout << endl;
    }
}

int SumMatrix(int Matrix[3][3], short Rows, short Cols)
{
    int Sum = 0;

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Sum += Matrix[i][j];
        }
    }
    return Sum;
}

bool CheckMatricesEquality(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
{
    return (SumMatrix(Matrix1, 3, 3) == SumMatrix(Matrix2, 3, 3));
}

void PrintEqualityResult(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
{
    if (CheckMatricesEquality(Matrix1, Matrix2, 3, 3))
        cout << "\nYes. Matrices are equal\n";
    else
        cout << "\nNo. Matrices are NOT equal\n";
}

int main()
{

    srand((unsigned)time(NULL));

    int Matrix1[3][3], Matrix2[3][3];

    FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    FillMatrixWithRandomNumbers(Matrix2, 3, 3);

    cout << "\nMatrix1: \n";
    PrintMatrix(Matrix1, 3, 3);

    cout << "\nMatrix2: \n";
    PrintMatrix(Matrix2, 3, 3);

    PrintEqualityResult(Matrix1, Matrix2, 3, 3);
    return 0;
}