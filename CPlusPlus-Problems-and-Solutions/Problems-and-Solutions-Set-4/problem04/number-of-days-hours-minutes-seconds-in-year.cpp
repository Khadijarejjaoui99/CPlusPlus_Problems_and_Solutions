#include <iostream>
using namespace std;

short ReadYear()
{
    int Year;

    cout << "Please enter a year to check: ";
    cin >> Year;

    return Year;
}

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAYear(short Year)
{
    return isLeapYear(Year) ? 366 : 365;
}

short NumberOfHoursInAYear(short Year)
{
    return NumberOfDaysInAYear(Year) * 24;
}

int NumberOfMinutesInAYear(short Year)
{
    return NumberOfHoursInAYear(Year) * 60;
}

int NumberOfSecondsInAYear(short Year)
{
    return NumberOfMinutesInAYear(Year) * 60;
}

int main()
{

    short Year = ReadYear();

    cout << "\nNumber of Days   in Year[" << Year << "] is " << NumberOfDaysInAYear(Year) << endl;
    cout << "Number of Hours   in Year[" << Year << "] is " << NumberOfHoursInAYear(Year) << endl;
    cout << "Number of Minutes in Year[" << Year << "] is " << NumberOfMinutesInAYear(Year) << endl;
    cout << "Number of Seconds in Year[" << Year << "] is " << NumberOfSecondsInAYear(Year) << endl;
    system("pause>0");
    return 0;
}