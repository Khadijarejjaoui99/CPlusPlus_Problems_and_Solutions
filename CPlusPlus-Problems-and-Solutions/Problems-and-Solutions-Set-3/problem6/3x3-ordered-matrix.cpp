#include <iostream>
using namespace std;

void FillMatrixWithOrderedNumbers(int Matrix[3][3], short Rows, short Cols)
{
    short Counter = 0;

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Counter++;

            Matrix[i][j] = Counter;
        }
    }
}

void PrintMatrix(int Matrix[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << Matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int Matrix[3][3];

    FillMatrixWithOrderedNumbers(Matrix, 3, 3);

    cout << "The following is 3x3 matrix:\n";
    PrintMatrix(Matrix, 3, 3);
    return 0;
}