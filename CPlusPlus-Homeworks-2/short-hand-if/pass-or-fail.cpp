#include <iostream>
using namespace std;

float ReadMark()
{
    float Mark;

    do
    {
        cout << "Please enter your mark:\n";
        cin >> Mark;
    } while (Mark < 1 || Mark > 100);

    return Mark;
}

string CheckMark(float Mark)
{
    string Result = "";

    Result = (Mark >= 50) ? "Pass" : "Fail";

    return Result;
}

int main()
{
    cout << CheckMark(ReadMark()) << endl;

    return 0;
}