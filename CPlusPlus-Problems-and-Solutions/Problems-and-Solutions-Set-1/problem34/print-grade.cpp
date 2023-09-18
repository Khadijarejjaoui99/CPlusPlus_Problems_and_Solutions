#include <iostream>
using namespace std;

float ReadMarkInRange(float From, float To)
{
    float Mark;
    do
    {
        cout << "Please enter mark between " << From << " and " << To << ":" << endl;
        cin >> Mark;
    } while (Mark < From || Mark > To);

    return Mark;
}

char GetGrade(float Mark)
{
    if (Mark >= 90)
        return 'A';
    else if (Mark >= 80)
        return 'B';
    else if (Mark >= 70)
        return 'C';
    else if (Mark >= 60)
        return 'D';
    else if (Mark >= 50)
        return 'E';
    else
        return 'F';
}

void PrintResult(char Grade)
{
    cout << "\n Your Grade is: " << Grade << endl;
}
int main()
{
    PrintResult(GetGrade(ReadMarkInRange(0, 100)));
    return 0;
}