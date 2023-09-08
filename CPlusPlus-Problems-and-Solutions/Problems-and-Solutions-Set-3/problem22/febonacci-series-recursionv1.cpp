#include <iostream>
using namespace std;

void PrintFibonacciSeries(int Num, int prev1, int prev2)
{
    int FibNum = 0;

    if (Num > 0)
    {
        FibNum = prev2 + prev1;
        cout << FibNum << " ";
        prev2 = prev1;
        prev1 = FibNum;
        PrintFibonacciSeries(Num - 1, prev1, prev2);
    }
}

int main()
{
    PrintFibonacciSeries(10, 0, 1);
    system("pause>0");

    return 0;
}
