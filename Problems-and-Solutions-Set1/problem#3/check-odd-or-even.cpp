#include <iostream>
using namespace std;

enum enOddEven
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

enOddEven CheckNumberType(int Num)
{
    int Result = Num % 2;

    if (Result == 0)
        return enOddEven::Even;
    else
        return enOddEven::Odd;
}

void PrintNumberType(enOddEven NumberType)
{
    if (NumberType == enOddEven::Even)
        cout << "Number is Even\n";
    else
        cout << "Number is Odd\n";
}

int main()
{
    PrintNumberType(CheckNumberType(ReadNumber()));

    return 0;
}