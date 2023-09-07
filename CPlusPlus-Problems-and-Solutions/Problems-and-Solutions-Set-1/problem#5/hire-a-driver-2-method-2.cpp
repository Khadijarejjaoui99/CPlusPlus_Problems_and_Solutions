#include <iostream>
using namespace std;

struct stInfo
{
    short Age;
    bool HasDrivingLicence;
    bool HasRecommendation;
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "Please enter your age:\n";
    cin >> Info.Age;
    cout << "Do you have a driving licence?\n";
    cin >> Info.HasDrivingLicence;
    cout << "Do you have a recommendation?\n";
    cin >> Info.HasRecommendation;
    return Info;
}

bool IsAccepted(stInfo Info)
{
    return (Info.HasRecommendation || (Info.Age > 21 && Info.HasDrivingLicence));
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