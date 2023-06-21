#include <iostream>
using namespace std;

void PrintNumbersPatter()
{
    for (int i = 10; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}

int main()
{
    PrintNumbersPatter();

    return 0;
}