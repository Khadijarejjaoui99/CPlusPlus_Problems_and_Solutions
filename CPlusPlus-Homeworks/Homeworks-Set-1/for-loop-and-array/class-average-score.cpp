#include <iostream>
using namespace std;

const int NUM_STUDENTS = 10;

struct stStudentInfo
{
    string StudentName;
    float StudentScore;
};

void ReadStudentInfo(stStudentInfo &StudentInfo)
{
    cout << "Please Enter Student Name:\n";
    cin >> StudentInfo.StudentName;
    cout << "Please Enter Student Score:\n";
    cin >> StudentInfo.StudentScore;
}

void ReadStudentsData(stStudentInfo Students[NUM_STUDENTS])
{
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        cout << "\nPlease enter Student's " << i + 1 << " Info\n";
        ReadStudentInfo(Students[i]);
    }
}

float AverageScoreOfTheClass(stStudentInfo Students[NUM_STUDENTS])
{
    float Sum = 0;

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        Sum += Students[i].StudentScore;
    }

    return Sum / NUM_STUDENTS;
}

int main()
{
    stStudentInfo Students[NUM_STUDENTS];

    ReadStudentsData(Students);
    cout << "\n*************************************\n";
    cout << "Average Score of the class = " << AverageScoreOfTheClass(Students) << endl;

    return 0;
}