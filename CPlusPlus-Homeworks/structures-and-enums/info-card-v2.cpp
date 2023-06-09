#include <iostream>
using namespace std;

struct stAddressInfo
{
    string Street, HouseNumber, ZipCode, City, Country;
};
struct stContactInfo
{
    stAddressInfo AddressInfo;
    string Phone, Email, FacebookID, TwitterID;
};
struct stPersonInfo
{
    string Name;
    short Age;
    float MonthlySalary, YearlySalary;
    char Gender;
    bool isMarried;
    stContactInfo ContactInfo;
};

int main()
{
    stPersonInfo PersonInfo;

    cout << "Please enter your name:\n";
    cin >> PersonInfo.Name;
    cout << "Please enter your age:\n";
    cin >> PersonInfo.Age;
    cout << "Please enter your monthly salary:\n";
    cin >> PersonInfo.MonthlySalary;
    cout << "Please enter F if you are female, and M if you are male:\n";
    cin >> PersonInfo.Gender;
    cout << "Please enter your 0 if you are single, and 1 if you are married:\n";
    cin >> PersonInfo.isMarried;
    cout << "Please enter your street:\n";
    cin >> PersonInfo.ContactInfo.AddressInfo.Street;
    cout << "Please enter your house number:\n";
    cin >> PersonInfo.ContactInfo.AddressInfo.HouseNumber;
    cout << "Please enter your zip code:\n";
    cin >> PersonInfo.ContactInfo.AddressInfo.ZipCode;
    cout << "Please enter your city:\n";
    cin >> PersonInfo.ContactInfo.AddressInfo.City;
    cout << "Please enter your country:\n";
    cin >> PersonInfo.ContactInfo.AddressInfo.Country;
    cout << "Please enter your phone number:\n";
    cin >> PersonInfo.ContactInfo.Phone;
    cout << "Please enter your email:\n";
    cin >> PersonInfo.ContactInfo.Email;
    cout << "Please enter your Facebook ID:\n";
    cin >> PersonInfo.ContactInfo.FacebookID;
    cout << "Please enter your Twitter ID:\n";
    cin >> PersonInfo.ContactInfo.TwitterID;

    PersonInfo.YearlySalary = PersonInfo.MonthlySalary * 12;
    cout << "***********************************\n";
    cout << "Name: " << PersonInfo.Name << endl;
    cout << "Age: " << PersonInfo.Age << " years old" << endl;
    cout << "Monthly Salary: " << PersonInfo.MonthlySalary << endl;
    cout << "Yearly Salary: " << PersonInfo.YearlySalary << endl;
    cout << "Gender: " << PersonInfo.Gender << endl;
    cout << "Married: " << PersonInfo.isMarried << endl;
    cout << "Street: " << PersonInfo.ContactInfo.AddressInfo.Street << endl;
    cout << "House Number: " << PersonInfo.ContactInfo.AddressInfo.HouseNumber << endl;
    cout << "Zip Code: " << PersonInfo.ContactInfo.AddressInfo.ZipCode << endl;
    cout << "City: " << PersonInfo.ContactInfo.AddressInfo.City << endl;
    cout << "Country: " << PersonInfo.ContactInfo.AddressInfo.Country << endl;
    cout << "Phone Number: " << PersonInfo.ContactInfo.Phone << endl;
    cout << "Email: " << PersonInfo.ContactInfo.Email << endl;
    cout << "Facebook ID: " << PersonInfo.ContactInfo.FacebookID << endl;
    cout << "Twitter ID: " << PersonInfo.ContactInfo.TwitterID << endl;
    cout << "***********************************\n";

    return 0;
}
