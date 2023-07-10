#include <iostream>
using namespace std;

int ReadPositiveNumber()
{
    int Number;

    do
    {
        cout << "Please enter a positive number:\n";
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

void PrintLettersPattern(int Number)
{
    for (int i = 65; i <= 65 + Number - 1; i++)
    {
        for (int j = 1; j <= Number - (65 + Number - 1 - i); j++)
        {
            cout << char(i);
        }
        cout << endl;
    }
}

int main()
{
    PrintLettersPattern(ReadPositiveNumber());
    return 0;
}