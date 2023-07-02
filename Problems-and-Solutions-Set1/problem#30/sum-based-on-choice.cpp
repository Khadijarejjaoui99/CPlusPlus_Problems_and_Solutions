#include <iostream>
using namespace std;

enum enOddEven
{
    Odd,
    Even
};

enum enWhatToSum
{
    SumAll = 1,
    SumEven = 2,
    SumOdd = 3
};

int ReadNumber()
{
    int Num;

    cout << "Please enter a number:\n";
    cin >> Num;

    return Num;
}

enWhatToSum ReadWhatToSum()
{
    int Opt;
    cout << "Please select what you want to sum:\n";
    cout << "(1) To Sum All Numbers:\n";
    cout << "(2) To Sum Even Numbers:\n";
    cout << "(3) To Sum Odd Numbers:\n";
    cout << "Please enter your choice: ";
    cin >> Opt;

    return (enWhatToSum)Opt;
}

enOddEven CheckOddOrEven(int Number)
{
    if (Number % 2 == 0)
        return enOddEven::Even;
    else
        return enOddEven::Odd;
}

int SumNumbers1ToN(int N, enWhatToSum WhatToSum)
{

    int Sum = 0;

    switch (WhatToSum)
    {
    case 1:
        cout << "You Selected To Sum All Numbers:\n";

        for (int i = 1; i <= N; i++)
        {
            Sum += i;
        }
        break;
    case 2:
        cout << "You Selected To Sum Even Numbers:\n";

        for (int i = 1; i <= N; i++)
        {
            if (CheckOddOrEven(i) == enOddEven::Even)
                Sum += i;
        }
        break;
    case 3:
        cout << "You Selected To Sum Odd Numbers:\n";

        for (int i = 1; i <= N; i++)
        {
            if (CheckOddOrEven(i) == enOddEven::Odd)
                Sum += i;
        }
        break;
    default:
        cout << "You Selected To Sum All Numbers:\n";
        for (int i = 1; i <= N; i++)
        {
            Sum += i;
        }
        break;
    }
    return Sum;
}

int main()
{
    int N = ReadNumber();
    enWhatToSum WhatToSum = ReadWhatToSum();
    cout << SumNumbers1ToN(N, WhatToSum) << endl;
    return 0;
}