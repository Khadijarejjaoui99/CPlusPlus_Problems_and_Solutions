#include <iostream>
using namespace std;

int ReadN()
{
    int N;
    cout << "Please enter N:\n";
    cin >> N;
    return N;
}

void PrintFrom1ToN(int N)
{
    for (int i = 1; i <= N; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    PrintFrom1ToN(ReadN());

    return 0;
}