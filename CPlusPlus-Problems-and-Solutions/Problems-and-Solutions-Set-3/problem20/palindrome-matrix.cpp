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

bool IsPalindromeMatrix(int Matrix[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols / 2; j++)
        {
            if (Matrix[i][j] != Matrix[i][Cols - 1 - j])
                return false;
        }
    }
    return true;
}

int main()
{

    int Matrix[3][3] = {{1, 2, 1}, {5, 5, 5}, {7, 3, 7}};

    cout << "\nMatrix: \n";
    PrintMatrix(Matrix, 3, 3);

    if (IsPalindromeMatrix(Matrix, 3, 3))
        cout << "Yes: is a Palindrome matrix\n";
    else
        cout << "No: is Not a Palindrome matrix\n";

    system("pause>0");

    return 0;
}