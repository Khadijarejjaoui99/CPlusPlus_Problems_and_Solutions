#include <iostream>
using namespace std;

enum enGrades
{
    A = 'A',
    B = 'B',
    C = 'C',
    D = 'D',
    E = 'E',
    F = 'F'
};
enGrades ReadGrade()
{
    char G;
    cout << "Please enter your Grade(A OR B OR C OR D OR E OR F):\n";
    cin >> G;
    return (enGrades)G;
}

void PrintGradePoint(enGrades Grade)
{
    switch (Grade)
    {
    case enGrades::A:
        cout << "A = 4.00\n";
        break;
    case enGrades::B:
        cout << "B = 3.50\n";
        break;
    case enGrades::C:
        cout << "C = 3.00\n";
        break;
    case enGrades::D:
        cout << "D = 2.50\n";
        break;
    case enGrades::E:
        cout << "E = 2.00\n";
        break;
    case enGrades::F:
        cout << "F = 0.00\n";
        break;
    default:
        cout << "Invalid Choice!";
    }
}
int main()
{
    PrintGradePoint(ReadGrade());

    return 0;
}