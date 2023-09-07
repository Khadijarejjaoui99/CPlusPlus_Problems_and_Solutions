#include <iostream>
using namespace std;

void PrintFromAToZ()
{
    cout << "******************************\n";
    cout << "      Upper-case Letters      \n";
    cout << "******************************\n";
    for (int i = 65; i <= 90; i++)
    {
        cout << char(i) << endl;
    }
}

void PrintFromaToz()
{
    cout << "******************************\n";
    cout << "      Lower-case Letters      \n";
    cout << "******************************\n";
    for (int c = 97; c <= 122; c++)
    {
        cout << (char)c << endl;
    }
}

void PrintFrom0To9()
{
    cout << "******************************\n";
    cout << "           Digits             \n";
    cout << "******************************\n";
    for (int d = 48; d <= 57; d++)
    {
        cout << char(d) << endl;
    }
}

int main()
{
    PrintFromAToZ();
    PrintFromaToz();
    PrintFrom0To9();

    return 0;
}