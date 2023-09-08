#include <iostream>
using namespace std;

void PrintFibonacciSeries(int Num, int prev2, int prev1)
{
    cout << prev1 << " ";

    if (Num >= 2)
    {
        PrintFibonacciSeries(Num - 1, prev1, prev1 + prev2);
    }
}

int main()
{
    PrintFibonacciSeries(10, 0, 1);
    system("pause>0");

    return 0;
}