#include <iostream>
using namespace std;

struct stEmployee
{
    string Name;
    float Salary;
};
int main()
{
    stEmployee Employee1, *ptr;

    Employee1.Name = "Khadija Rejjaoui";
    Employee1.Salary = 5000;

    cout << "Name: " << Employee1.Name << endl;
    cout << "Salary: " << Employee1.Salary << endl;

    ptr = &Employee1;

    cout << "\nUsing Pointer:\n";
    cout << "Name: " << ptr->Name << endl;
    cout << "Salary: " << ptr->Salary << endl;

    // Changing values using pointer:

    ptr->Name = "Zineb Ahmed";
    ptr->Salary = 9000;
    cout << "\nName: " << ptr->Name << endl;
    cout << "Salary: " << ptr->Salary << endl;

    return 0;
}