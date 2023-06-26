#include <iostream>
using namespace std;

int ReadNumber()
{
    int Num = 0;

    cin >> Num;

    return Num;
}

int CalculateSum(int A, int B)
{
    return A + B;
}

void PrintSum(int A, int B)
{
    int X = CalculateSum(A, B);

    cout << "X = " << X << endl;
}

int main()
{
    int A = ReadNumber();
    int B = ReadNumber();

    PrintSum(A, B);

    return 0;
}