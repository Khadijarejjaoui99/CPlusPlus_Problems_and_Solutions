#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{
    int Num;

    cout << "Please enter a number:\n";
    cin >> Num;

    return Num;
}

float CalculateHalfNum(int Num)
{
    return (float)Num / 2;
}

void PrintResult(int Num)
{
    string Result = "Half of " + to_string(Num) + " is " + to_string(CalculateHalfNum(Num));

    cout << Result << endl;
}

int main()
{
    PrintResult(ReadNumber());

    return 0;
}