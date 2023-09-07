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

int Factorial(int N)
{
    cout << "Factorial = ";

    int Factorial = 1;

    for (int i = N; i >= 1; i--)
    {
        Factorial *= i;
    }

    return Factorial;
}

int main()
{
    int N = ReadNumber();

    cout << Factorial(N) << endl;

    return 0;
}