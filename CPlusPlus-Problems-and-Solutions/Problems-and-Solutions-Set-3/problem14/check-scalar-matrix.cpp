#include <iostream>
#include <iomanip>
using namespace std;

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

bool IsScalarMatrix(int Matrix[3][3], short Rows, short Cols)
{
    int FirstDiagElement = Matrix[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (i == j && Matrix[i][j] != FirstDiagElement)
                return false;
            else if (i != j && Matrix[i][j] != 0)
                return false;
        }
    }

    return true;
}

void PrintScalarResult(int Matrix[3][3], short Rows, short Cols)
{
    if (IsScalarMatrix(Matrix, 3, 3))
        cout << "\nYes: Matrix is Scalar\n";
    else
        cout << "\nNo: Matrix is NOT Scalar\n";
}

int main()
{

    int Matrix[3][3] = {{9, 0, 0}, {0, 9, 0}, {0, 0, 9}};
    // int Matrix[3][3] = {{9, 0, 0}, {0, 9, 0}, {2, 0, 9}};
    // int Matrix[3][3] = {{9, 0, 0}, {0, 5, 0}, {0, 0, 9}};
    // int Matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "\nMatrix: \n";
    PrintMatrix(Matrix, 3, 3);

    PrintScalarResult(Matrix, 3, 3);
    return 0;
}