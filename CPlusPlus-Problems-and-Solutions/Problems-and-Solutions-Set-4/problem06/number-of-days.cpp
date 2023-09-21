#include <iostream>
using namespace std;

short ReadNumber(string Msg)
{
    int Number;

    cout << Msg;
    cin >> Number;

    return Number;
}

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Year, short Month)
{
    if (Month < 1 || Month > 12)
        return 0;

    int NumberOfDays[] = {31,
                          28,
                          31,
                          30,
                          31,
                          30,
                          31,
                          31,
                          30,
                          31,
                          30,
                          31};

    return (Month == 2 && isLeapYear(Year)) ? 29 : NumberOfDays[Month - 1];
    // return Month == 2 ? (isLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];
}

int main()
{
    short Year = ReadNumber("Please enter a year to check: ");
    short Month = ReadNumber("Please enter a month to check: ");

    cout << "\nNumber of Days in Month[" << Month << "] is " << NumberOfDaysInAMonth(Year, Month) << endl;

    system("pause>0");
    return 0;
}