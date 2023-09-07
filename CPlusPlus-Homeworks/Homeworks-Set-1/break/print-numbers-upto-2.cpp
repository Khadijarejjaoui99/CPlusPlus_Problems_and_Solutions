#include <iostream>
using namespace std;

void PrintNumbersUpto2()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 3)
            break;

        cout << i << endl;
    }
}

int main()
{
    PrintNumbersUpto2();

    return 0;
}