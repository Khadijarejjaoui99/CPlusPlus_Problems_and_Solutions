#include <iostream>
using namespace std;

struct stInfo
{
    string FirstName, LastName;
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "Please enter First Name:\n";
    cin >> Info.FirstName;
    cout << "Please enter Last Name:\n";
    cin >> Info.LastName;

    return Info;
}

string GetFullName(stInfo Info)
{
    string FullName = "";

    FullName = Info.FirstName + " " + Info.LastName;

    return FullName;
}

void PrintFullName(string FullName)
{
    cout << "\n Your Full Name is: " << FullName << endl;
}

int main()
{
    PrintFullName(GetFullName(ReadInfo()));

    return 0;
}