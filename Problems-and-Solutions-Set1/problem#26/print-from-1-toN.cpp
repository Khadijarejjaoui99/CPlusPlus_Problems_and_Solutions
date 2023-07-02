#include <iostream>
using namespace std;

int ReadNumber()
{
    int Num;

    cout << "Please enter a number:\n";
    cin >> Num;

    return Num;
}

void Print1ToNUsingWhileLoop(int N)
{
    cout << "\n 1 To N Using While Loop:\n\n";
    int i = 1;

    while (i <= N)
    {
        cout << i << endl;
        i++;
    }
}

void Print1ToNUsingForLoop(int N)
{
    cout << "\n 1 To N Using For Loop:\n\n";

    for (int i = 1; i <= N; i++)
    {
        cout << i << endl;
    }
}

void Print1ToNUsingDoWhileLoop(int N)
{
    cout << "\n 1 To N Using Do While Loop:\n\n";

    int i = 1;

    do
    {
        cout << i << endl;
        i++;
    } while (i <= N);
}

int main()
{
    int N = ReadNumber();

    Print1ToNUsingWhileLoop(N);
    Print1ToNUsingForLoop(N);
    Print1ToNUsingDoWhileLoop(N);
    return 0;
}