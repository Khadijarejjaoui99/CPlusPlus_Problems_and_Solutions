#include <iostream>
using namespace std;

void PrintFromMtoN(int M, int N)
{
    if (M >= N)
    {
        cout << M << endl;
        PrintFromNtoM(M - 1, N);
    }
}

int main()
{
    cout << "Numbers from 5 to 1:\n";
    PrintFromNtoM(5, 1);
    cout << "Numbers from 30 to 20:\n";
    PrintFromNtoM(30, 20);
    return 0;
}