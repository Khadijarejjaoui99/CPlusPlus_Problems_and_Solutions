#include <iostream>
using namespace std;

int ReadN()
{
    int N;

    cout << "Please enter N:\n";
    cin >> N;

    return N;
}

int SumOddNumbers1ToN(int N)
{
    int Sum = 0;

    for (int i = 1; i <= N; i = i + 2)
    {
        Sum += i;
    }
    return Sum;
}

int main()
{

    cout << "Sum = " << SumOddNumbers1ToN(ReadN()) << endl;

    return 0;
}