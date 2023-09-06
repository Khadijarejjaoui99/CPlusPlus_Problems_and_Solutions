#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int GetRandomNumbers(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void FillMatrixWithRandomNumbers(int Matrix[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Matrix[i][j] = GetRandomNumbers(1, 100);
        }
    }
}

void PrintMatrix(int Matrix[3][3], short Rows, short Cols)
{
    cout << "The following is a 3x3 matrix:\n";

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
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

void PrintEachColSum(int Matrix[3][3], short Rows, short Cols)
{
    cout << "The followings are the sum of each column in the matrix:\n";

    for (short j = 0; j < Cols; j++)
    {
        cout << "Col " << j + 1 << " Sum = " << GetColSum(Matrix, Rows, j) << endl;
    }
}

int main()
{

    srand((unsigned)time(NULL));

    int Matrix[3][3];

    FillMatrixWithRandomNumbers(Matrix, 3, 3);

    PrintMatrix(Matrix, 3, 3);

    PrintEachColSum(Matrix, 3, 3);

    return 0;
}