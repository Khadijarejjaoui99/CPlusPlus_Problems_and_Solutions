#include <iostream>
using namespace std;

void PrintStarsPattern()
{
    for (int i = 10; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    PrintStarsPattern();

    return 0;
}