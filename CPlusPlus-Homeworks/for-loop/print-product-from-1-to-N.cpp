#include <iostream>
using namespace std;

int ReadNumber(string Msg)
{
    int Number;

    cout << Msg << endl;
    cin >> Number;

    return Number;
}

int CalculateProductFrom1ToN(int N)
{
    int Product = 1;
    for (int i = 1; i <= N; i++)
    {
        Product *= i;
    }

    return Product;
}

int main()
{
    int N = ReadNumber("Please enter N:");
    cout << "Product From 1 to " << N << " = " << CalculateProductFrom1ToN(N) << endl;
}