#include <iostream>
using namespace std;

struct stInfo
{
    short Age;
    bool HasDrivingLicence;
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "Please enter your age:\n";
    cin >> Info.Age;
    cout << "Do you have driving licence:\n";
    cin >> Info.HasDrivingLicence;

    return Info;
}

bool IsAccepted(stInfo Info)
{
    return (Info.Age > 21 && Info.HasDrivingLicence);
}

void PrintResult(stInfo Info)
{
    if (IsAccepted(Info))
        cout << "Hired\n";
    else
        cout << "Rejected\n";
}

int main()
{
    PrintResult(ReadInfo());

    return 0;
}