#include <iostream>
using namespace std;

int ReadPositiveNumber()
{
    int Number = 0;

    cout << "Please enter a positive number:\n";
    cin >> Number;

    while (Number < 0)
    {
        cout << "Wrong Input! Please enter a positive number:\n";
        cin >> Number;
    }

    return Number;
}

int CalculateFactorial(int Number)
{
    int Factorial = 1, i = Number;

    while (i >= 1)
    {
        Factorial *= i;
        i--;
    }

    return Factorial;
}

int main()
{
    int Factorial = CalculateFactorial(ReadPositiveNumber());

    cout << "Factorial = " << Factorial << endl;

    return 0;
}