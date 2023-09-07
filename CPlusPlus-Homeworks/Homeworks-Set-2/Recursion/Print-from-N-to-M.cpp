#include <iostream>
using namespace std;

void PrintFromNtoM(int N, int M)
{
    if (N <= M)
    {
        cout << N << endl;
        PrintFromNtoM(N + 1, M);
    }
}

int main()
{
    cout << "Numbers from 1 to 5:\n";
    PrintFromNtoM(1, 5);
    cout << "Numbers from 20 to 30:\n";
    PrintFromNtoM(20, 30);
    return 0;
}