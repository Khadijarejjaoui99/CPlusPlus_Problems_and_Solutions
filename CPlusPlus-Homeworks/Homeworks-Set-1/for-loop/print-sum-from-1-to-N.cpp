#include <iostream>
using namespace std;

int ReadNumber(string Msg)
{
    int Number;

    cout << Msg << endl;
    cin >> Number;

    return Number;
}

int CalculateSumFrom1ToN(int N)
{
    int Sum = 0;
    for (int i = 1; i <= N; i++)
    {
        Sum += i;
    }

    return Sum;
}

int main()
{
    int N = ReadNumber("Please enter N:");
    cout << "Sum From 1 to " << N << " = " << CalculateSumFrom1ToN(N) << endl;
}