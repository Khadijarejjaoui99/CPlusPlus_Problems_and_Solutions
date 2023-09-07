#include <iostream>
using namespace std;

enum enOperationTypes
{
    Add = '+',
    Sub = '-',
    Mult = '*',
    Div = '/'
};

float ReadNumber(string Message)
{
    float Num;
    cout << Message << endl;
    cin >> Num;
    return Num;
}

enOperationTypes ReadOperationType()
{
    char OpType;
    cout << "Please enter operation type:\n";
    cin >> OpType;

    return (enOperationTypes)OpType;
}
void SmallCalculator(float Num1, float Num2, enOperationTypes OperationType)
{
    switch (OperationType)
    {
    case enOperationTypes::Add:
        cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
        break;
    case enOperationTypes::Sub:
        cout << Num1 << " - " << Num2 << " = " << Num1 - Num2 << endl;
        break;
    case enOperationTypes::Mult:
        cout << Num1 << " * " << Num2 << " = " << Num1 * Num2 << endl;
        break;
    case enOperationTypes::Div:
        if (Num2 > 0)
            cout << Num1 << " / " << Num2 << " = " << Num1 / Num2 << endl;
        else
            cout << "Num2 should not be equal to 0\n";
        break;
    default:
        cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
    }
}
int main()
{
    float Num1 = ReadNumber("Please enter Num1:");
    float Num2 = ReadNumber("Please enter Num2:");
    enOperationTypes OperationType = ReadOperationType();

    SmallCalculator(Num1, Num2, OperationType);
}