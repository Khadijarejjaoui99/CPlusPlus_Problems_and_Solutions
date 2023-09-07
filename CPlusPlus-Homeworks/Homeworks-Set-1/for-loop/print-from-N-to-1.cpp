#include <iostream>
using namespace std;

int ReadN()
{
    int N;
    cout << "Please enter N:\n";
    cin >> N;

    return N;
}

void PrintFromNTo1(int N)
{
    for (int i = N; i >= 1; i--)
    {
        cout << i << endl;
    }
}

int main()
{
    PrintFromNTo1(ReadN());
    return 0;
}