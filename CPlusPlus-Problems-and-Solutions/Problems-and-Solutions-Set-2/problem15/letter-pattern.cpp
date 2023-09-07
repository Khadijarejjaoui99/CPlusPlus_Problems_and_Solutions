#include <iostream>
using namespace std;

int ReadPositiveNumber(string Msg)
{
    int Number;

    do
    {
        cout << Msg << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

void PrintLettersPattern(int Number)
{
    for (int i = 65; i <= 65 + Number - 1; i++)
    {
        for (int j = 1; j <= i - 65 + 1; j++)
        {
            cout << char(i);
        }
        cout << endl;
    }
}

int main()
{
    PrintLettersPattern(ReadPositiveNumber("Please enter a positive number"));
    return 0;
}