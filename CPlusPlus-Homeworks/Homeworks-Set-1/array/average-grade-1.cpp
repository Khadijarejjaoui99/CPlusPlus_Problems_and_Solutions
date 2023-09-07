#include <iostream>
using namespace std;

int main()
{
    float Grades[3], Average = 0;
    cout << "Please Enter Grade1:\n";
    cin >> Grades[0];
    cout << "Please Enter Grade2:\n";
    cin >> Grades[1];
    cout << "Please Enter Grade3:\n";
    cin >> Grades[2];

    Average = (Grades[0] + Grades[1] + Grades[2]) / 3;

    cout << "**********************************\n";
    cout << "The average of the grades is: " << Average << endl;

    return 0;
}