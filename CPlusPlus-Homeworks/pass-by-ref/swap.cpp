#include <iostream>
using namespace std;

void Swap(int &Num1, int &Num2)
{
    int Temp;

    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
}

int main()
{
    int Num1, Num2;

    cout << "Please enter Num1:\n";
    cin >> Num1;
    cout << "Please enter Num2:\n";
    cin >> Num2;

    cout << "Num1 before swap: " << Num1 << endl;
    cout << "Num2 before swap: " << Num2 << endl;

    Swap(Num1, Num2);

    cout << "Num1 after swap: " << Num1 << endl;
    cout << "Num2 after swap: " << Num2 << endl;
    return 0;
}