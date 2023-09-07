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
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << Matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int GetRowSum(int Matrix[3][3], short RowNumber, short Cols)
{
    int Sum = 0;

    for (short j = 0; j < Cols; j++)
    {
        Sum += Matrix[RowNumber][j];
    }

    return Sum;
}

void PrintEachRowSum(int Matrix[3][3], short Rows, short Cols)
{
    cout << "\nThe followings are the sum of each row in the matrix:\n";

    for (int i = 0; i < Rows; i++)
    {
        cout << "Row " << i + 1 << " Sum = " << GetRowSum(Matrix, i, Cols) << endl;
    }
}

int main()
{

    srand((unsigned)time(NULL));

    int Matrix[3][3];

    FillMatrixWithRandomNumbers(Matrix, 3, 3);

    cout << "The following is 3x3 random matrix:\n";
    PrintMatrix(Matrix, 3, 3);

    PrintEachRowSum(Matrix, 3, 3);

    return 0;
}