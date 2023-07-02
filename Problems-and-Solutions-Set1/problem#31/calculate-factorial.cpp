#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number;

    do
    {
        cout << "Please enter a positive number:\n";
        cin >> Number;
    } while (Number < 0);

    return Number;
}

int FactorialUsingForLoop(int N)
{
    cout << "Factorial Using For Loop: ";

    int Factorial = 1;

    for (int i = N; i >= 1; i--)
    {
        Factorial *= i;
    }

    return Factorial;
}

int FactorialUsingWhileLoop(int N)
{
    cout << "Factorial Using While Loop: ";

    int i = N, Factorial = 1;

    while (i >= 1)
    {
        Factorial *= i;
        i--;
    }
    return Factorial;
}

int FactorialUsingDoWhileLoop(int N)
{
    cout << "Factorial Using Do...While Loop: ";

    int i = N + 1, Factorial = 1;

    do
    {
        i--;
        Factorial *= i;
    } while (i > 1);
    return Factorial;
}
int main()
{
    int N = ReadNumber();

    cout << FactorialUsingForLoop(N) << endl;
    cout << FactorialUsingWhileLoop(N) << endl;
    cout << FactorialUsingDoWhileLoop(N) << endl;
    return 0;
}