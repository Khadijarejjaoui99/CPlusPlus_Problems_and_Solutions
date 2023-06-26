#include <iostream>
using namespace std;

int ReadNumber(string Msg)
{
    int Num;
    cout << Msg << endl;
    cin >> Num;
    return Num;
}

void ReadNumbers(int &Num1, int &Num2, int &Num3)
{
    Num1 = ReadNumber("Please enter Num1:");
    Num2 = ReadNumber("Please enter Num2:");
    Num3 = ReadNumber("Please enter Num3:");
}

int SumOf3Numbers(int Num1, int Num2, int Num3)
{
    return Num1 + Num2 + Num3;
}

void PrintResult(int Total)
{
    cout << "Sum = " << Total << endl;
}

int main()
{
    int Num1, Num2, Num3;
    ReadNumbers(Num1, Num2, Num3);
    PrintResult(SumOf3Numbers(Num1, Num2, Num3));

    return 0;
}