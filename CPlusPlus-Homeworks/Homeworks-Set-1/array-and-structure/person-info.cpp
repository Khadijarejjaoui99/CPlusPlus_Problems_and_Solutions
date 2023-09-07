#include <iostream>
using namespace std;

struct stInfo
{
    string FirstName, LastName, Phone;
    short Age;
};

void ReadInfo(stInfo &Info)
{
    cout << "Please enter first name:\n";
    cin >> Info.FirstName;
    cout << "Please enter last name:\n";
    cin >> Info.LastName;
    cout << "Please enter age:\n";
    cin >> Info.Age;
    cout << "Please enter phone number:\n";
    cin >> Info.Phone;
}

void DisplayInfo(stInfo Info)
{
    cout << "\n****************************************\n";
    cout << "First Name: " << Info.FirstName << endl;
    cout << "Last Name: " << Info.LastName << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "Phone Number: " << Info.Phone << endl;
    cout << "****************************************\n";
}

void ReadPersonsInfo(stInfo Persons[2])
{
    ReadInfo(Persons[0]);
    ReadInfo(Persons[1]);
}
void DisplayPersonsInfo(stInfo Persons[2])
{
    DisplayInfo(Persons[0]);
    DisplayInfo(Persons[1]);
}

int main()
{
    stInfo Persons[2];

    ReadPersonsInfo(Persons);
    DisplayPersonsInfo(Persons);
    return 0;
}