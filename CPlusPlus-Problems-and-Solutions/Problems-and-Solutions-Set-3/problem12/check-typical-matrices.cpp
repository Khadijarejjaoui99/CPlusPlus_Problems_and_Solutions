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

bool AreMatricesTypical(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix1[i][j] != Matrix2[i][j])
                return false;
        }
    }

    return true;
}

void PrintTypicalResult(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
{
    if (AreMatricesTypical(Matrix1, Matrix2, 3, 3))
        cout << "\nYes. Matrices are typical\n";
    else
        cout << "\nNo. Matrices are NOT typical\n";
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

    PrintTypicalResult(Matrix1, Matrix2, 3, 3);
    return 0;
}