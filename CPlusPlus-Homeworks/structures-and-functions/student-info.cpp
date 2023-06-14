#include <iostream>
#include <string>
using namespace std;

struct stStudentInfo
{
    string StudentName, RollNumber;
    float Mark;
};

void ReadInfo(stStudentInfo &StudentInfo)
{
    cout << "Please enter student's name:\n";
    getline(cin, StudentInfo.StudentName);
    cout << "Please enter student's roll number:\n";
    cin >> StudentInfo.RollNumber;
    cout << "Please enter student's mark:\n";
    cin >> StudentInfo.Mark;
}
void PrintInfo(stStudentInfo StudentInfo)
{
    cout << "\n******************************************\n";
    cout << "Student Name: " << StudentInfo.StudentName << endl;
    cout << "Student Roll Number: " << StudentInfo.RollNumber << endl;
    cout << "Student Mark: " << StudentInfo.Mark << endl;
    cout << "******************************************\n";
}
int main()
{
    stStudentInfo StudentInfo;
    ReadInfo(StudentInfo);
    PrintInfo(StudentInfo);
}