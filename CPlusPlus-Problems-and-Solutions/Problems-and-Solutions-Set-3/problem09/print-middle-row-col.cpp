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

void PrintMiddleRowInMatrix(int Matrix[3][3], short Rows, short Cols)
{
    short MiddleRowNumber = Rows / 2;

    cout << "\nThe middle Row:\n";

    for (short j = 0; j < Cols; j++)
    {

        printf(" %0*d\t", 2, Matrix[MiddleRowNumber][j]);
    }

    cout << endl;
}

void PrintMiddleColInMatrix(int Matrix[3][3], short Rows, short Cols)
{
    int MiddleColNumber = Cols / 2;

    cout << "\nThe middle Col:\n";

    for (short i = 0; i < Rows; i++)
    {

        printf(" %0*d\t", 2, Matrix[i][MiddleColNumber]);
    }
    cout << endl;
}

int main()
{

    srand((unsigned)time(NULL));

    int Matrix[3][3];

    FillMatrixWithRandomNumbers(Matrix, 3, 3);

    cout << "The following is a 3x3 matrix:\n";
    PrintMatrix(Matrix, 3, 3);

    PrintMiddleRowInMatrix(Matrix, 3, 3);

    PrintMiddleColInMatrix(Matrix, 3, 3);

    return 0;
}