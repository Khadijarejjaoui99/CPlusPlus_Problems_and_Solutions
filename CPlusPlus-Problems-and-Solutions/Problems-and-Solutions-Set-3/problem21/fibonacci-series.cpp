#include <iostream>
using namespace std;

void PrintFibonacciSeries(int Num)
{
    int Prev2 = 0;
    int Prev1 = 1;
    int FibNum = 0;

    cout << "1 ";

    for (int i = 2; i <= Num; i++)
    {
        FibNum = Prev2 + Prev1;
        cout << FibNum << " ";
        Prev2 = Prev1;
        Prev1 = FibNum;
    }

    cout << endl;
}

int main()
{
    PrintFibonacciSeries(10);
    system("pause>0");

    return 0;
}