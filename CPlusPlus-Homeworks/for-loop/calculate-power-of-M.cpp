#include <iostream>
using namespace std;

int ReadNumber(string Msg)
{
    int Number;

    cout << Msg << endl;
    cin >> Number;

    return Number;
}

int CalculatePowerOfM(int Number, int M)
{
    int Result = 1;

    for (int i = 1; i <= M; i++)
    {
        Result *= Number;
    }

    return Result;
}

int main()
{
    int Number = ReadNumber("Please enter a number");
    int M = ReadNumber("Please enter M");

    cout << Number << "^" << M << " = " << CalculatePowerOfM(Number, M) << endl;

    return 0;
}