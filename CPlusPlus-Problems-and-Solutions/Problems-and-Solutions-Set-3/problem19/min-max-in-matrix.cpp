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

int MinNumberInMatrix(int Matrix[3][3], short Rows, short Cols)
{
    int Min = Matrix[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] < Min)
                Min = Matrix[i][j];
        }
    }

    return Min;
}

int MaxNumberInMatrix(int Matrix[3][3], short Rows, short Cols)
{
    int Max = Matrix[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] > Max)
                Max = Matrix[i][j];
        }
    }

    return Max;
}

int main()
{

    int Matrix[3][3] = {{77, 5, 12}, {22, 20, 6}, {14, 3, 9}};

    cout << "\nMatrix: \n";
    PrintMatrix(Matrix, 3, 3);

    cout << "Minimum Number is: " << MinNumberInMatrix(Matrix, 3, 3) << endl;
    cout << "Maximum Number is: " << MaxNumberInMatrix(Matrix, 3, 3) << endl;

    system("pause>0");

    return 0;
}