#include <iostream>
using namespace std;

struct stPersonInfo
{
    string FirstName, LastName, Phone;
    short Age;
};

void ReadPersonInfo(stPersonInfo &Person)
{
    cout << "Please enter first name:\n";
    cin >> Person.FirstName;
    cout << "Please enter last name:\n";
    cin >> Person.LastName;
    cout << "Please enter age:\n";
    cin >> Person.Age;
    cout << "Please enter phone number:\n";
    cin >> Person.Phone;
}

void DisplayPersonInfo(stPersonInfo Person)
{
    cout << "\n****************************************\n";
    cout << "First Name: " << Person.FirstName << endl;
    cout << "Last Name: " << Person.LastName << endl;
    cout << "Age: " << Person.Age << endl;
    cout << "Phone Number: " << Person.Phone << endl;
    cout << "****************************************\n";
}

int main()
{
    stPersonInfo Persons[2];

    ReadPersonInfo(Persons[0]);
    ReadPersonInfo(Persons[1]);
    DisplayPersonInfo(Persons[0]);
    DisplayPersonInfo(Persons[1]);
    return 0;
}