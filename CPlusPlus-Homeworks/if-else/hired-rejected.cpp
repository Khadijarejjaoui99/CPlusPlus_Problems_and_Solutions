#include <iostream>
using namespace std;

struct stCandidateInfo
{
    short Age;
    bool HasDriversLicence;
};

void ReadCandidateInfo(stCandidateInfo &CandidateInfo)
{
    cout << "Please enter candidate age:\n";
    cin >> CandidateInfo.Age;
    cout << "If candidate have driver's licence enter 1 otherwise enter 0:\n";
    cin >> CandidateInfo.HasDriversLicence;
}
void HiredOrRejected(stCandidateInfo CandidateInfo)
{
    if (CandidateInfo.Age > 21 && CandidateInfo.HasDriversLicence)
        cout << "Hired\n";
    else
        cout << "Rejected\n";
}
int main()
{
    stCandidateInfo CandidateInfo;

    ReadCandidateInfo(CandidateInfo);
    HiredOrRejected(CandidateInfo);

    return 0;
}