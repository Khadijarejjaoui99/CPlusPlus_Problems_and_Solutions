#include <iostream>
using namespace std;

struct stPersonInfo
{
    string Name, City, Country;
    short Age;
    float MonthlySalary, YearlySalary;
    char Gender;
    bool isMarried;
};

int main()
{
    stPersonInfo PersonInfo;

    cout << "Please enter your name:\n";
    cin >> PersonInfo.Name;
    cout << "Please enter your age:\n";
    cin >> PersonInfo.Age;
    cout << "Please enter your city:\n";
    cin >> PersonInfo.City;
    cout << "Please enter your country:\n";
    cin >> PersonInfo.Country;
    cout << "Please enter your monthly salary:\n";
    cin >> PersonInfo.MonthlySalary;
    cout << "Please enter F if you are female, and M if you are male:\n";
    cin >> PersonInfo.Gender;
    cout << "Please enter your 0 if you are single, and 1 if you are married:\n";
    cin >> PersonInfo.isMarried;

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