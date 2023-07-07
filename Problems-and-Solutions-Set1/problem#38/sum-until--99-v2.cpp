#include <iostream>
#include <string>
using namespace std;

int ReadNum(string Msg)
{
    int Num;

    cout << Msg << endl;
    cin >> Num;

    return Num;
}

int SumNumbers()
{
    int Num = 0, Sum = 0, Counter = 1;

    do
    {
        Num = ReadNum("Please enter number " + to_string(Counter));

        if (Num == -99)
            break;

        Sum += Num;
        Counter++;
    } while (Num != -99);
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