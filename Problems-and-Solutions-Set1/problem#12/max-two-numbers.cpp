#include <iostream>
using namespace std;

int ReadNumber(string Msg)
{
    int Num;

    cout << Msg << endl;
    cin >> Num;

    return Num;
}

int MaxTwoNumbers(int Num1, int Num2)
{
    if (Num1 > Num2)
        return Num1;
    else
        return Num2;
}

void PrintResult(int Max)
{
    cout << "Max = " << Max << endl;
}
int main()
{
    int Num1 = 0, Num2 = 0;

    Num1 = ReadNumber("Please enter Num1:");
    Num2 = ReadNumber("Please enter Num2:");

    PrintResult(MaxTwoNumbers(Num1, Num2));

    return 0;
}