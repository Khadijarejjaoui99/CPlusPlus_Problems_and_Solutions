#include <iostream>
#include <limits>
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

int ReadNumber(string Msg)
{
    int Num;

    cout << Msg;
    cin >> Num;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        cout << Msg;
        cin >> Num;
    }

    return Num;
}

bool IsNumberInMatrix(int Matrix[3][3], int NumberToLookFor, int Rows, int Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] == NumberToLookFor)
                return true;
        }
    }
    return false;
}

int main()
{

    int Matrix[3][3] = {{8, 12, 2}, {2, 3, 2}, {3, 1, 8}};

    cout << "\nMatrix: \n";
    PrintMatrix(Matrix, 3, 3);

    int NumberToLookFor = ReadNumber("Please Enter the number to look for: ");

    if (IsNumberInMatrix(Matrix, NumberToLookFor, 3, 3))
        cout << "Yes it is there\n";
    else
        cout << "No it is Not there\n";

    return 0;
}