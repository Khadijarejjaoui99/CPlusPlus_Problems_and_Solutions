#include <iostream>
using namespace std;

void ReadMark(float &Mark)
{
    cout << "Please enter your mark:\n";
    cin >> Mark;
}
void CheckPassFail(float Mark)
{
    if (Mark >= 50)
        cout << "Pass\n";
    else
        cout << "Fail\n";
}
int main()
{
    float Mark;
    ReadMark(Mark);
    CheckPassFail(Mark);
}