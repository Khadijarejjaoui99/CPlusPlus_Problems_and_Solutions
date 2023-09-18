#include <iostream>
using namespace std;

void ReadNumbers(int &Num1, int &Num2)
{
    cout << "Please enter Num1:\n";
    cin >> Num1;
    cout << "Please enter Num2:\n";
    cin >> Num2;
}

void PrintNumbers(int Num1, int Num2)
{
    cout << "\nNum1 = " << Num1 << endl;
    cout << "Num2 = " << Num2 << endl;
}

void SwapNumbers(int &Num1, int &Num2)
{
    int Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
}

int main()
{
    int Num1, Num2;

    ReadNumbers(Num1, Num2);
    PrintNumbers(Num1, Num2);

    SwapNumbers(Num1, Num2);
    PrintNumbers(Num1, Num2);

    return 0;
}