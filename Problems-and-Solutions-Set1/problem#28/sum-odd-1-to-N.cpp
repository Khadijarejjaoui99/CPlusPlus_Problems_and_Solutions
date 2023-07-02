#include <iostream>
using namespace std;

enum enOddEven
{
    Odd,
    Even
};

int ReadNumber()
{
    int Num;

    cout << "Please enter a number:\n";
    cin >> Num;

    return Num;
}

enOddEven CheckOddOrEven(int Number)
{
    if (Number % 2 == 0)
        return enOddEven::Even;
    else
        return enOddEven::Odd;
}

int SumOddNumbers1ToN_UsingFor(int N)
{
    cout << "Sum of Odd numbers from 1 to " << N << " Using For Loop\n";

    int Sum = 0;

    for (int i = 1; i <= N; i++)
    {
        if (CheckOddOrEven(i) == enOddEven::Odd)
            Sum += i;
    }

    return Sum;
}

int SumOddNumbers1ToN_UsingWhile(int N)
{
    cout << "Sum of Odd numbers from 1 to " << N << " Using While Loop\n";

    int i = 0, Sum = 0;

    while (i < N)
    {
        i++;
        if (CheckOddOrEven(i) == enOddEven::Odd)
            Sum += i;
    }

    return Sum;
}

int SumOddNumbers1ToN_UsingDoWhile(int N)
{
    cout << "Sum of Odd numbers from 1 to " << N << " Using Do...While Loop\n";

    int i = 0, Sum = 0;

    do
    {
        i++;
        if (CheckOddOrEven(i) == enOddEven::Odd)
            Sum += i;
    } while (i < N);

    return Sum;
}

int main()
{
    int N = ReadNumber();
    cout << SumOddNumbers1ToN_UsingFor(N) << endl;
    cout << SumOddNumbers1ToN_UsingDoWhile(N) << endl;
    cout << SumOddNumbers1ToN_UsingWhile(N) << endl;

    return 0;
}