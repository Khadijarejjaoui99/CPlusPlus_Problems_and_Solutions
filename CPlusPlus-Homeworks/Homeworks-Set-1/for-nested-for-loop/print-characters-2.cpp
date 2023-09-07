#include <iostream>
using namespace std;

void PrintCharactersPattern()
{
    for (int i = 65; i <= 70; i++)
    {
        for (int j = 65; j <= i; j++)
        {
            cout << char(j);
        }
        cout << endl;
    }
}

int main()
{
    PrintCharactersPattern();

    return 0;
}