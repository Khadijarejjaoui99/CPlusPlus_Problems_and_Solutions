#include <iostream>
using namespace std;
enum enStatus
{
    Single,
    Married
};
enum enGender
{
    Female,
    Male
};
struct stPersonInfo
{
    string Name, City, Country;
    short Age;
    float MonthlySalary, YearlySalary;
    enGender Gender;
    enStatus isMarried;
};

int main()
{
    stPersonInfo PersonInfo;

    PersonInfo.Name = "Khadija Rejjaoui";
    PersonInfo.Age = 24;
    PersonInfo.City = "El Jadida";
    PersonInfo.Country = "Morocco";
    PersonInfo.MonthlySalary = 5576.87;
    PersonInfo.Gender = enGender::Female;
    PersonInfo.isMarried = enStatus::Single;

    PersonInfo.YearlySalary = PersonInfo.MonthlySalary * 12;
    cout << "***********************************\n";
    cout << "Name: " << PersonInfo.Name << endl;
    cout << "Age: " << PersonInfo.Age << " years old" << endl;
    cout << "City: " << PersonInfo.City << endl;
    cout << "Country: " << PersonInfo.Country << endl;
    cout << "Monthly Salary: " << PersonInfo.MonthlySalary << endl;
    cout << "Yearly Salary: " << PersonInfo.YearlySalary << endl;
    cout << "Gender: " << PersonInfo.Gender << endl;
    cout << "Married: " << PersonInfo.isMarried << endl;
    cout << "***********************************\n";

    return 0;
}