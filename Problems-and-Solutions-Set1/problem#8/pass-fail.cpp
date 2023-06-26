#include <iostream>
using namespace std;

float ReadMark()
{
    float Mark;

    cout << "Please enter your mark:\n";
    cin >> Mark;

    return Mark;
}

void PrintResult(float Mark)
{
    if (Mark >= 50)
        cout << "Pass\n";
    else
        cout << "Fail\n";
}

int main()
{
    PrintResult(ReadMark());

    return 0;
}