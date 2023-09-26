#include <iostream>
using namespace std;

struct stDate
{
    short Day, Month, Year;
};

short ReadDay()
{
    short Day;

    cout << "\n Please enter a day: ";
    cin >> Day;

    return Day;
}

short ReadMonth()
{
    short Month;

    cout << " Please enter a month: ";
    cin >> Month;

    return Month;
}

short ReadYear()
{
    short Year;

    cout << " Please enter a year: ";
    cin >> Year;

    return Year;
}

stDate ReadFullDate()
{
    stDate Date;

    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();

    return Date;
}

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInMonth(short Month, short Year)
{
    short NumberOfDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    return (Month == 2 && isLeapYear(Year)) ? 29 : NumberOfDays[Month - 1];
}

bool isLastDayInMonth(stDate Date)
{
    return (Date.Day == NumberOfDaysInMonth(Date.Month, Date.Year));
}

bool isLastMonthInYear(short Month)
{
    return (Month == 12);
}

int main()
{
    stDate Date = ReadFullDate();

    if (isLastDayInMonth(Date))
        cout << "\n Yes, " << Date.Day << " is the Last Day in the Month.\n";
    else
        cout << "\n No, " << Date.Day << " is Not the Last Day in the Month.\n";

    if (isLastMonthInYear(Date.Month))
        cout << "\n Yes, " << Date.Month << " is the Last Month in the Year.\n";
    else
        cout << "\n No, " << Date.Month << " is Not the Last Month in the Year.\n";

    system("pause>0");
    return 0;
}