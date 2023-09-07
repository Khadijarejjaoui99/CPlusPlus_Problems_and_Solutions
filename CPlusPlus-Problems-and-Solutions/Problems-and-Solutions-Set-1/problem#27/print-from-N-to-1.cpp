#include <iostream>
using namespace std;

int ReadNumber()
{
    int Num;

    cout << "Please enter a number:\n";
    cin >> Num;

    return Num;
}

void PrintNTo1UsingWhileLoop(int N)
{
    cout << "\n 1 To N Using While Loop:\n\n";

    int i = N;

    while (i >= 1)
    {
        cout << i << endl;
        i--;
    }
}

void PrintNTo1UsingForLoop(int N)
{
    cout << "\n 1 To N Using For Loop:\n\n";

    for (int i = N; i >= 1; i--)
    {
        cout << i << endl;
    }
}

void PrintNTo1UsingDoWhileLoop(int N)
{
    cout << "\n 1 To N Using Do While Loop:\n\n";

    int i = N;

    do
    {
        cout << i << endl;
        i--;
    } while (i >= 1);
}

int main()
{
    int N = ReadNumber();

    PrintNTo1UsingWhileLoop(N);
    PrintNTo1UsingForLoop(N);
    PrintNTo1UsingDoWhileLoop(N);
    return 0;
}