#include <iostream>
using namespace std;

int ReadN()
{
    int N;

    cout << "Please enter a positive N number :\n";
    cin >> N;

    while (N < 0)
    {
        cout << "Please enter a positive N number :\n";
        cin >> N;
    }

    return N;
}

int SumOddNumbers(int N)
{
    int i = 1, Sum = 0;

    while (i <= N)
    {
        if (i % 2 != 0)
        {
            Sum += i;
                }
        i++;
    }

    return Sum;
}

int main()
{
    cout << "Sum Odd Numbers = " << SumOddNumbers(ReadN()) << endl;

    return 0;
}