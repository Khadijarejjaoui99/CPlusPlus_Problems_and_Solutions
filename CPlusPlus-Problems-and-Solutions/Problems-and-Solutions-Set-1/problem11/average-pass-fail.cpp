#include <iostream>
using namespace std;

enum enPassFail
{
    Pass,
    Fail
};

float ReadMark(string Msg)
{
    float Num;

    cout << Msg << endl;
    cin >> Num;

    return Num;
}

void ReadMarks(float &Mark1, float &Mark2, float &Mark3)
{
    Mark1 = ReadMark("Please enter Mark1:");
    Mark2 = ReadMark("Please enter Mark2:");
    Mark3 = ReadMark("Please enter Mark3:");
}

float Sum3Marks(float Mark1, float Mark2, float Mark3)
{
    return Mark1 + Mark2 + Mark3;
}

float CalculateAvg(float Mark1, float Mark2, float Mark3)
{
    return Sum3Marks(Mark1, Mark2, Mark3) / 3;
}

enPassFail CheckAverage(float Avg)
{
    if (Avg >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintResults(float Avg)
{
    cout << "Average = " << Avg << endl;

    if (CheckAverage(Avg) == enPassFail::Pass)
        cout << "Pass\n";
    else
        cout << "Fail\n";
}

int main()
{
    float Mark1, Mark2, Mark3;

    ReadMarks(Mark1, Mark2, Mark3);

    PrintResults(CalculateAvg(Mark1, Mark2, Mark3));

    return 0;
}