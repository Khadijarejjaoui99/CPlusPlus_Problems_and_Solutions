#include <iostream>
using namespace std;

struct stInfo
{
    string FirstName, LastName, Phone, Country;
    short Age;
};

void ReadInfo(stInfo &Info)
{
    cout << "Please Enter First Name:\n";
    cin >> Info.FirstName;
    cout << "Pleae Enter Last Name:\n";
    cin >> Info.LastName;
    cout << "Pleae Enter Phone Number:\n";
    cin >> Info.Phone;
    cout << "Pleae Enter Country:\n";
    cin >> Info.Country;
    cout << "Pleae Enter Age:\n";
    cin >> Info.Age;
}

void PrintInfo(stInfo Info)
{
    cout << "************************************\n";
    cout << "First Name: " << Info.FirstName << endl;
    cout << "Last Name: " << Info.LastName << endl;
    cout << "Phone Number: " << Info.Phone << endl;
    cout << "Country: " << Info.Country << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "************************************\n";
}

void ReadPersonsInfo(stInfo Persons[100], int &NumberOfPersons)
{

    cout << "How many persons you want to enter their info? 1 to 100?\n";
    cin >> NumberOfPersons;

    for (int i = 0; i <= NumberOfPersons - 1; i++)
    {
        cout << "\nPlease Enter Person's " << i + 1 << " Info" << endl;
        ReadInfo(Persons[i]);
    }
}

void PrintPersonsInfo(stInfo Persons[100], int NumberOfPersons)
{
    for (int i = 0; i <= NumberOfPersons - 1; i++)
    {
        cout << "\nPerson's " << i + 1 << " Info\n";
        PrintInfo(Persons[i]);
    }
}
int main()
{
    stInfo Persons[100];
    int NumberOfPersons;

    ReadPersonsInfo(Persons, NumberOfPersons);
    PrintPersonsInfo(Persons, NumberOfPersons);
}