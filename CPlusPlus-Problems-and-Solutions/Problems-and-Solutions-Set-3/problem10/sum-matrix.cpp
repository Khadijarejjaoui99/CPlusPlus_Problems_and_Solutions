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

int main()
{

    srand((unsigned)time(NULL));

    int Matrix[3][3];

    FillMatrixWithRandomNumbers(Matrix, 3, 3);
    cout << "\nMatrix: \n";
    PrintMatrix(Matrix, 3, 3);

    cout << "\nSum of Matrix is: " << SumMatrix(Matrix, 3, 3) << endl;

    return 0;
}