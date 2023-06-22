#include <iostream>
using namespace std;

void ReadNum(int &Num, string Msg)
{
    cout << Msg << endl;
    cin >> Num;
}

int CalculateSum()
{
    int Num, Sum = 0;

    ReadNum(Num, "Please enter a number");

    while (Num != -99)
    {
        Sum += Num;
        ReadNum(Num, "Please enter another number");
    }

    return Sum;
}

int main()
{
    cout << "Sum = " << CalculateSum() << endl;

    return 0;
}