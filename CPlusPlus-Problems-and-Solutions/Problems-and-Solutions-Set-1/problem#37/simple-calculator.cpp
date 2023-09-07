#include <iostream>
using namespace std;

enum enOperationType
{
    Add = '+',
    Sub = '-',
    Mult = '*',
    Div = '/'
};

float ReadNumber(string Msg)
{
    float Num;

    cout << Msg << endl;
    cin >> Num;

    return Num;
}

enOperationType ReadOperationType()
{
    char OpType;

    cout << "(+) To Add Two Numbers:\n";
    cout << "(-) To Substruct Two Numbers:\n";
    cout << "(*) To Multiply Two Numbers:\n";
    cout << "(/) To Divide Two Numbers:\n";
    cout << "Your Choice: ";
    cin >> OpType;

    return (enOperationType)OpType;
}

void SimpleCalculator()
{
    float Num1 = ReadNumber("Please enter Number1:");
    float Num2 = ReadNumber("Please enter Number2:");
    enOperationType OperationType = ReadOperationType();

    switch (OperationType)
    {
    case enOperationType::Add:
        cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
        break;
    case enOperationType::Sub:
        cout << Num1 << " - " << Num2 << " = " << Num1 - Num2 << endl;
        break;
    case enOperationType::Mult:
        cout << Num1 << " * " << Num2 << " = " << Num1 * Num2 << endl;
        break;
    case enOperationType::Div:
        if (Num2 != 0)
            cout << Num1 << " / " << Num2 << " = " << (float)Num1 / Num2 << endl;
        else
            cout << "Number 2 should not be equal to 0\n";
        break;
    default:
        cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
        break;
    }
}

int main()
{

    SimpleCalculator();

    return 0;
}