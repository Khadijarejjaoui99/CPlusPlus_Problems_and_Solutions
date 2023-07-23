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
    PrintFromNtoM(1, 5);
    return 0;
}