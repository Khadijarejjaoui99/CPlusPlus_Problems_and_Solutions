#include <iostream>
using namespace std;

void SwapWithoutTemp(int &Num1, int &Num2)
{
    // XOR bitwise operator (^)
    Num1 = Num1 ^ Num2;
    Num2 = Num1 ^ Num2;
    Num1 = Num1 ^ Num2;
}
int main()
{
    int Num1, Num2;

    cout << "Please enter Num1:\n";
    cin >> Num1;
    cout << "Please enter Num2:\n";
    cin >> Num2;

    cout << "Before Swap Num1 = " << Num1 << endl;
    cout << "Before Swap Num2 = " << Num2 << endl;

    SwapWithoutTemp(Num1, Num2);

    cout << "After Swap Num1 = " << Num1 << endl;
    cout << "After Swap Num2 = " << Num2 << endl;
}