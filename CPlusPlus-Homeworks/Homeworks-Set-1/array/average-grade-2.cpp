#include <iostream>
using namespace std;

void ReadGrades(float Grades[3])
{
    cout << "Please enter Grade1:\n";
    cin >> Grades[0];
    cout << "Please enter Grade2:\n";
    cin >> Grades[1];
    cout << "Please enter Grade3:\n";
    cin >> Grades[2];
}
float CalculateGradesAverage(float Grades[3])
{
    return (Grades[0] + Grades[1] + Grades[2]) / 3;
}
void PrintResult(float Grades[3])
{
    cout << "*****************************\n";
    cout << "The average of grades is: " << CalculateGradesAverage(Grades) << endl;
}
int main()
{
    float Grades[3];
    ReadGrades(Grades);
    PrintResult(Grades);
    return 0;
}