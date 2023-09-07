#include <iostream>
using namespace std;

enum enPassFail
{
    Pass,
    Fail
};

float ReadMark()
{
    float Mark;

    cout << "Please enter your mark:\n";
    cin >> Mark;

    return Mark;
}

enPassFail CheckMark(float Mark)
{
    if (Mark >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintResult(float Mark)
{
    if (CheckMark(Mark) == enPassFail::Pass)
        cout << "Pass\n";
    else
        cout << "Fail\n";
}

int main()
{
    PrintResult(ReadMark());

    return 0;
}
