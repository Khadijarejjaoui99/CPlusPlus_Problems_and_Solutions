#include <iostream>
using namespace std;

void ReadMarks(float Marks[3])
{
    cout << "Please enter Marks1:\n";
    cin >> Marks[0];
    cout << "Please enter Marks2:\n";
    cin >> Marks[1];
    cout << "Please enter Marks3:\n";
    cin >> Marks[2];
}
void PrintMarks(float Marks[3])
{
    cout << "Mark 1: " << Marks[0] << endl;
    cout << "Mark 2: " << Marks[1] << endl;
    cout << "Mark 3: " << Marks[2] << endl;
}
float CalculateAverage(float Marks[3])
{
    return (Marks[0] + Marks[1] + Marks[2]) / 3;
}
void CheckPassFail(float Marks[3])
{
    float Average = CalculateAverage(Marks);
    cout << Average << endl;
    if (Average >= 50)
        cout << "Pass\n";
    else
        cout << "Fail\n";
}
int main()
{
    float Marks[3];
    ReadMarks(Marks);
    PrintMarks(Marks);
    CheckPassFail(Marks);
    return 0;
}