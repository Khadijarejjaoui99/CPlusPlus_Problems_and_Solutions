#include <iostream>
#include <iomanip>
#include <cmath>
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

short GetNumberCount(int Matrix[3][3], int NumberToCount, int Rows, int Cols)
{
    short Counter = 0;

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] == NumberToCount)
                Counter++;
        }
    }
    return Counter;
}

bool IsSparceMatrix(int Matrix[3][3], short Rows, short Cols)
{
    short MatrixSize = Rows * Cols;

    return (GetNumberCount(Matrix, 0, Rows, Cols) >= ceil((float)MatrixSize / 2));
}

int main()
{

    int Matrix[3][3] = {{0, 0, 0}, {0, 0, 0}, {3, 1, 8}};
    // int Matrix[3][3] = {{0, 0, 0}, {3, 1, 8}, {3, 1, 8}};

    cout << "\nMatrix: \n";
    PrintMatrix(Matrix, 3, 3);

    if (IsSparceMatrix(Matrix, 3, 3))
        cout << "Yes: is a Sparce Matrix\n";
    else
        cout << "No: is Not a Sparce Matrix\n";

    return 0;
}