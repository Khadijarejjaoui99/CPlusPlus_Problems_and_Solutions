#include <iostream>

using namespace std;

int main()
{
    string name = "Khadija Rejjaoui", city = "El Jadida", country = "Morocoo";
    int age = 23;
    float monthlySalary = 5000, yearlySalary = monthlySalary * 12;
    char gender = 'F';
    bool isMarried = false;

    cout << "***************************\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years old.\n";
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "Monthly Salary: " << monthlySalary << endl;
    cout << "Yearly Salary: " << yearlySalary << endl;
    cout << "Gender: " << gender << endl;
    cout << "Married: " << isMarried << endl;
    cout << "***************************\n";

    return 0;
}