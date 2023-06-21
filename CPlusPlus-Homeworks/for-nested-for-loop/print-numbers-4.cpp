#include <iostream>
using namespace std;

void PrintNumbersPatter()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
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