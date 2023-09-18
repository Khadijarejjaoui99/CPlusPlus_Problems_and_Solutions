#include <iostream>
using namespace std;

int ReadNum()
{
    int Num;

    cout << "Please enter a number:\n";
    cin >> Num;

    return Num;
}

int SumNumbers()
{
    int Num = ReadNum();
    int Sum = 0;
    while (Num != -99)
    {
        Sum += Num;
        Num = ReadNum();
    }
    return Sum;
}

void PrintResult(int Sum)
{
    cout << "Sum = " << Sum << endl;
}

int main()
{
    PrintResult(SumNumbers());
}