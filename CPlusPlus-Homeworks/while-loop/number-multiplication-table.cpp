#include <iostream>
using namespace std;

int ReadPositiveNumber()
{
    int Number;

    cout << "Please enter a positive number:\n";
    cin >> Number;

    while (Number < 0)
    {
        cout << "Wrong Input! Please enter a positive number:\n";
        cin >> Number;
    }

    return Number;
}

void PrintMultiplicationTableOfNumber(int Number)
{
    int i = 0;

    cout << "Multiplication Table of " << Number << endl;
    cout << "******************************************\n";

    while (i <= 10)
    {
        cout << Number << " * " << i << " = " << Number * i << endl;
        i++;
    }
}

int main()
{
    PrintMultiplicationTableOfNumber(ReadPositiveNumber());

    return 0;
}