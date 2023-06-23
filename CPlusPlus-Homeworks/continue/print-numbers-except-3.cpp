#include <iostream>
using namespace std;

void PrintNumbersExcept3()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 3)
            continue;

        cout << i << endl;
    }
}

int main()
{
    PrintNumbersExcept3();

    return 0;
}