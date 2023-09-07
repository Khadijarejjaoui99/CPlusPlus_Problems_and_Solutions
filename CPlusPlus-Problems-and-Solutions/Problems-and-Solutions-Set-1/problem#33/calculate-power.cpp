#include <iostream>
using namespace std;

int ReadNumber(string Msg)
{
    int Num;

    cout << Msg << endl;
    cin >> Num;

    return Num;
}

int powerOfM(int Number, int M)
{
    int P = 1;

    for (int i = 1; i <= M; i++)
    {
        P *= Number;
    }

    return P;
}

int main()
{
    int Number = ReadNumber("Please enter a number");
    int M = ReadNumber("Please enter power M");
    cout << Number << "^" << M << " = " << powerOfM(Number, M) << endl;
    return 0;
}