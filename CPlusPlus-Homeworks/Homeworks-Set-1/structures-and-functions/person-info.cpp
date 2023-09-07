#include <iostream>
using namespace std;

struct stPersonInfo
{
    string Name, Country, Phone;
    short Age;
    float MonthlySalary;
};

void ReadInfo(stPersonInfo &PersonInfo)
{
    cout << "Please enter person's name:\n";
    cin >> PersonInfo.Name;
    cout << "Please enter person's age:\n";
    cin >> PersonInfo.Age;
    cout << "Please enter person's country:\n";
    cin >> PersonInfo.Country;
    cout << "Please enter person's phone number:\n";
    cin >> PersonInfo.Phone;
    cout << "Please enter person's monthly salary:\n";
    cin >> PersonInfo.MonthlySalary;
}

void PrintInfo(stPersonInfo PersonInfo)
{
    cout << "\n***********************************\n";
    cout << "Name: " << PersonInfo.Name << endl;
    cout << "Age: " << PersonInfo.Age << endl;
    cout << "Country: " << PersonInfo.Country << endl;
    cout << "Phone Number: " << PersonInfo.Phone << endl;
    cout << "Monthly Salary: " << PersonInfo.MonthlySalary << endl;
    cout << "Yearly Salary: " << PersonInfo.MonthlySalary * 12 << endl;
    cout << "***********************************\n";
}

int main()
{
    stPersonInfo PersonInfo;
    ReadInfo(PersonInfo);
    PrintInfo(PersonInfo);
}