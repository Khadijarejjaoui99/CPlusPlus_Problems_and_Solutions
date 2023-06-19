#include <iostream>
using namespace std;

int ReadN()
{
    int N;

    cout << "Please enter N:\n";
    cin >> N;

    return N;
}

int CalculateFactorialOfN(int N)
{
    int Factorial = 1;

    for (int i = N; i >= 1; i--)
    {
        Factorial *= i;
    }

    return Factorial;
}

int main()
{
    int N = ReadN();

    cout << "Factorial of " << N << " is " << CalculateFactorialOfN(N) << endl;

    return 0;
}