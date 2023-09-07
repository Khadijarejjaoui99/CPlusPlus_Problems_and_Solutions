#include <iostream>
using namespace std;

int ReadrangeEnd()
{
    int rangeEnd;

    cout << "Please enter the range end:\n";
    cin >> rangeEnd;

    return rangeEnd;
}

int SumEvenFrom1ToN(int rangeEnd)
{
    int Sum = 0;

    for (int i = 2; i <= rangeEnd; i = i + 2)
    {
        Sum += i;
    }

    return Sum;
}

int main()
{
    cout << "Sum of even numbers from 1 to N is = " << SumEvenFrom1ToN(ReadrangeEnd()) << endl;

    return 0;
}