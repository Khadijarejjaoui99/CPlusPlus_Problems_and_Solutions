#include <iostream>
using namespace std;

void ReadMark(float &Mark)
{
    cout << "Please enter mark:\n";
    cin >> Mark;
}
void PrintGrade(float Mark)
{
    if (Mark >= 90)
        cout << "A\n";
    else if (Mark >= 70)
        cout << "B\n";
    else if (Mark >= 50)
        cout << "C\n";
    else
        cout << "F\n";
}
int main()
{
    float Mark;
    ReadMark(Mark);
    PrintGrade(Mark);

    return 0;
}