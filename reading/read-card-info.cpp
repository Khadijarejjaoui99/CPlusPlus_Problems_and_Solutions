#include <iostream>
using namespace std;

int main()
{
    string name, city, country;
    int age;
    float monthlySalary;
    char gender;
    bool isMarried;

    cout << "Please enter your name: \n";
    cin >> name;
    cout << "Please enter your age: \n";
    cin >> age;
    cout << "Please enter your city: \n";
    cin >> city;
    cout << "Please enter your country: \n";
    cin >> country;
    cout << "Please enter your monthly salary: \n";
    cin >> monthlySalary;
    cout << "Please enter your gender F/M \n";
    cin >> gender;
    cout << "If you are married please enter 1 if not please enter 0 \n";
    cin >> isMarried;

    cout << "***************************\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years old.\n";
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "Monthly Salary: " << monthlySalary << endl;
    cout << "Yearly Salary: " << monthlySalary * 12 << endl;
    cout << "Gender: " << gender << endl;
    cout << "Married: " << isMarried << endl;
    cout << "***************************\n";

    return 0;
}