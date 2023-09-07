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

bool IsIdentityMatrix(int Matrix[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (i == j && Matrix[i][j] != 1)
                return false;
            else if (i != j && Matrix[i][j] != 0)
                return false;
        }
    }

    return true;
}

void PrintIdentityResult(int Matrix[3][3], short Rows, short Cols)
{
    if (IsIdentityMatrix(Matrix, 3, 3))
        cout << "\nYes: Matrix is identity\n";
    else
        cout << "\nNo: Matrix is NOT identity\n";
}

int main()
{

    int Matrix[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    // int Matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "\nMatrix: \n";
    PrintMatrix(Matrix, 3, 3);

    PrintIdentityResult(Matrix, 3, 3);
    return 0;
}