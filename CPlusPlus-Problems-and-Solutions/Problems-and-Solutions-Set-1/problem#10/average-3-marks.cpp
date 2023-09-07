#include <iostream>
using namespace std;

float ReadMark(string Msg)
{
    float Mark;

    cout << Msg << endl;
    cin >> Mark;

    return Mark;
}

void ReadMarks(float &Mark1, float &Mark2, float &Mark3)
{
    Mark1 = ReadMark("Please enter Mark1");
    Mark2 = ReadMark("Please enter Mark2");
    Mark3 = ReadMark("Please enter Mark3");
}

float Sum3Marks(float Mark1, float Mark2, float Mark3)
{
    return Mark1 + Mark2 + Mark3;
}

float CalculateAvg(float Mark1, float Mark2, float Mark3)
{
    return Sum3Marks(Mark1, Mark2, Mark3) / 3;
}

void PrintResults(float Avg)
{
    cout << "Average = " << Avg << endl;
}

int main()
{
    float Mark1, Mark2, Mark3;

    ReadMarks(Mark1, Mark2, Mark3);
    PrintResults(CalculateAvg(Mark1, Mark2, Mark3));

    return 0;
}