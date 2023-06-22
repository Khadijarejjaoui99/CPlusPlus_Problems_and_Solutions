#include <iostream>
using namespace std;

void PrintEvenNumbersFrom1To20()
{
    int i = 1;

    while (i <= 20)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
        i++;
    }
}

int main()
{
    PrintEvenNumbersFrom1To20();

    return 0;
}