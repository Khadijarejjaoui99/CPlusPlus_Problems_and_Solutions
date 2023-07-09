#include <iostream>
using namespace std;

void PrintTableHeader()
{
    cout << "\n\n\t\t\t Multiplication Table From 1 To 10\n\n";
    cout << "\t";

    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }

    cout << "\n------------------------------------------------------------------------------------\n";
}

string ColumnSeparator(int i)
{
    return (i < 10) ? "   |" : "  |";
}

void PrintMultiplicationTable()
{
    PrintTableHeader();

    for (int i = 1; i <= 10; i++)
    {
        cout << " " << i << ColumnSeparator(i) << "\t";

        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }

        cout << endl;
    }
}

int main()
{
    PrintMultiplicationTable();
    return 0;
}