#include <iostream>
using namespace std;

int ReadPositiveNumber(string Msg)
{
    int Num;

    cout << Msg << endl;
    cin >> Num;

    while (Num < 0)
    {
        cout << "Invalid Input " << Msg << endl;
        cin >> Num;
    }

    return Num;
}

int CalculatePower(int Number, int M)
{
    int i = 1, Power = 1;

    while (i <= M)
    {
        Power *= Number;
        i++;
    }

    return Power;
}

int main()
{
    int Number = ReadPositiveNumber("Please enter Number");
    int M = ReadPositiveNumber("Please enter M");

    cout << "Power = " << CalculatePower(Number, M) << endl;
}