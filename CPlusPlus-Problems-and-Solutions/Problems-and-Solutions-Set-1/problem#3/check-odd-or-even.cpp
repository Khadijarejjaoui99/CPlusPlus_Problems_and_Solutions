#include <iostream>
using namespace std;

enum enNumberType
{
    Even = 1,
    Odd = 2
};

int ReadNumber()
{
    int Num;

    cout << "Please enter a number:\n";
    cin >> Num;

    return Num;
}

enNumberType CheckNumberType(int Num)
{
    int Result = Num % 2;

    if (Result == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;
}

void PrintNumberType(enNumberType NumberType)
{
    if (NumberType == enNumberType::Even)
        cout << "Number is Even\n";
    else
        cout << "Number is Odd\n";
}

int main()
{
    PrintNumberType(CheckNumberType(ReadNumber()));

    return 0;
}