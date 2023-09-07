#include <iostream>
#include <string>
using namespace std;

struct stEmployeeInfo
{
    string EmployeeName, EmployeeID;
    float HourlyWige;
    int NumberOfWorkingHours;
};
void ReadInfo(stEmployeeInfo &EmployeeInfo)
{
    cout << "Please enter emplyee name:\n";
    getline(cin, EmployeeInfo.EmployeeName);
    cout << "Please enter employee ID:\n";
    cin >> EmployeeInfo.EmployeeID;
    cout << "Please enter employee hourly wige:\n";
    cin >> EmployeeInfo.HourlyWige;
    cout << "Please enter number of working hours:\n ";
    cin >> EmployeeInfo.NumberOfWorkingHours;
}
float CalculateWeeklyPay(stEmployeeInfo EmployeeInfo)
{
    return EmployeeInfo.HourlyWige * EmployeeInfo.NumberOfWorkingHours * 7;
}
void DisplayInfo(stEmployeeInfo EmployeeInfo)
{
    cout << "\n***********************************\n";
    cout << "Emplyee Name: " << EmployeeInfo.EmployeeName << endl;
    cout << "Emplyee ID: " << EmployeeInfo.EmployeeID << endl;
    cout << "Emplyee Hourly Wige: " << EmployeeInfo.HourlyWige << endl;
    cout << "Number Of Working Hours: " << EmployeeInfo.NumberOfWorkingHours << endl;
    cout << "Employee's Weekly Pay is: " << CalculateWeeklyPay(EmployeeInfo) << endl;
    cout << "***********************************\n";
}
int main()
{
    stEmployeeInfo EmployeeInfo;

    ReadInfo(EmployeeInfo);
    DisplayInfo(EmployeeInfo);
    return 0;
}