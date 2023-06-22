#include <iostream>
using namespace std;

void PrintLettersFromAToZ()
{
    int i = 65;

    while (i <= 90)
    {
        cout << char(i) << endl;
        i++;
    }
}

int main()
{
    PrintLettersFromAToZ();

    return 0;
}