#include <iostream>
#include <vector>
using namespace std;

struct stEmployees
{
    string FirstName, LastName;
    float Salary;
};
stEmployees ReadEmployee()
{
    stEmployees Employee;

    cout << "Please enter First Name:\n";
    cin >> Employee.FirstName;

    cout << "Please enter Last Name:\n";
    cin >> Employee.LastName;

    cout << "Please enter Salary:\n";
    cin >> Employee.Salary;

    return Employee;
}

void ReadEmployeesInfo(vector<stEmployees> &vEmployees)
{
    char AddMore = 'Y';
    stEmployees tempEmployee;

    do
    {
        tempEmployee = ReadEmployee();

        vEmployees.push_back(tempEmployee);

        cout << "Do you want to eneter more employees Y/N:\n";
        cin >> AddMore;

    } while (AddMore == 'y' || AddMore == 'Y');
}

void PrintEmployeesInfo(vector<stEmployees> &vEmployees)
{
    cout << "\nEmployees Info:\n";

    for (stEmployees &Employee : vEmployees)
    {
        cout << "\nFirst Name: " << Employee.FirstName << endl;
        cout << "Last Name: " << Employee.LastName << endl;
        cout << "Salary: " << Employee.Salary << endl;
    }
}

int main()
{
    vector<stEmployees> vEmployees;

    ReadEmployeesInfo(vEmployees);
    PrintEmployeesInfo(vEmployees);

    return 0;
}