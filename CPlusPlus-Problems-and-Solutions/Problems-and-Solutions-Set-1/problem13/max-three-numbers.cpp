#include <iostream>
using namespace std;

int ReadNumber(string Msg)
{
    int Num;

    cout << Msg << endl;
    cin >> Num;

    return Num;
}

int MaxThreeNumbers(int Num1, int Num2, int Num3)
{

    if (Num1 > Num2)
    {
        if (Num1 > Num3)
            return Num1;
        else
            return Num3;
    }
    else
    {
        if (Num2 > Num3)
            return Num2;
        else
            return Num3;
    }
}

void PrintResult(int Max)
{
    cout << "Max = " << Max << endl;
}
int main()
{
    int Num1 = 0, Num2 = 0, Num3 = 0;

    Num1 = ReadNumber("Please enter Num1:");
    Num2 = ReadNumber("Please enter Num2:");
    Num3 = ReadNumber("Please enter Num3:");

    PrintResult(MaxThreeNumbers(Num1, Num2, Num3));

    return 0;
}