#include <iostream>
#include <vector>
using namespace std;

struct stEmployees
{
    string FirstName, LastName;
    float Salary;
};

int main()
{
    vector<stEmployees> vEmployees;

    stEmployees Employee1;

    Employee1.FirstName = "Khadija";
    Employee1.LastName = "Rejjoui";
    Employee1.Salary = 2000;
    vEmployees.push_back(Employee1);

    Employee1.FirstName = "Zineb";
    Employee1.LastName = "Amine";
    Employee1.Salary = 3000;
    vEmployees.push_back(Employee1);

    for (stEmployees &Employee : vEmployees)
    {
        cout << "\nFirst Name: " << Employee.FirstName << endl;
        cout << "Last Name: " << Employee.LastName << endl;
        cout << "Salary: " << Employee.Salary << endl;
    }

    return 0;
}