#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "How many marks do you want to enter? ";
    cin >> num;

    float *Marks = new float[num];

    cout << "Please enter students marks:\n";
    for (int i = 0; i < num; i++)
    {
        cout << "Student " << i + 1 << ": ";
        cin >> *(Marks + i);
    }

    cout << "\nStudents Marks:\n";
    for (int i = 0; i < num; i++)
    {
        cout << "Student " << i + 1 << ": " << *(Marks + i) << endl;
    }

    delete[] Marks;

    return 0;
}