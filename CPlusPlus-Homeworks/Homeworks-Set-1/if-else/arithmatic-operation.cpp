#include <iostream>
using namespace std;

void ReadInputs(float &Num1, float &Num2, string &OpType)
{
    cout << "Please enter the first number:\n";
    cin >> Num1;
    cout << "Please enter the second number:\n";
    cin >> Num2;
    cout << "Please enter the operation type:\n";
    cin >> OpType;
}
void Operation(float Num1, float Num2, string OpType)
{
    if (OpType == "+")
        cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
    else if (OpType == "-")
        cout << Num1 << " - " << Num2 << " = " << Num1 - Num2 << endl;
    else if (OpType == "*")
        cout << Num1 << " * " << Num2 << " = " << Num1 * Num2 << endl;
    else if (OpType == "/")
        cout << Num1 << " / " << Num2 << " = " << Num1 / Num2 << endl;
    else
        cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
}
int main()
{
    float Num1, Num2;
    string OpType;
    ReadInputs(Num1, Num2, OpType);
    Operation(Num1, Num2, OpType);
    return 0;
}