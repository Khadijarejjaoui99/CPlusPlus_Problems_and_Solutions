#include <iostream>
using namespace std;

struct stInfo
{
    string FirstName, LastName;
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "Please enter your First Name:\n";
    cin >> Info.FirstName;
    cout << "Please enter your Last Name:\n";
    cin >> Info.LastName;

    return Info;
}

string GetFullName(stInfo Info, bool isReversed = false)
{
    string FullName = "";

    if (!isReversed)
        FullName = Info.FirstName + " " + Info.LastName;
    else
        FullName = Info.LastName + " " + Info.FirstName;
    return FullName;
}

void PrintFullName(string FullName)
{
    cout << "\n Your Full Name is: " << FullName << endl;
}

int main()
{
    PrintFullName(GetFullName(ReadInfo()));
    PrintFullName(GetFullName(ReadInfo(), true));

    return 0;
}