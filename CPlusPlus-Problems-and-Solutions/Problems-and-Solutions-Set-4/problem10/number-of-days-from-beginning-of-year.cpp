#include <iostream>
using namespace std;

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
    cout << "\n Please enter a month: ";
    cin >> Month;

    return Month;
}

short ReadYear()
{
    short Year;
    cout << "\n Please enter a year: ";
    cin >> Year;

    return Year;
}

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    short NumberOfDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    return (Month == 2 && isLeapYear(Year)) ? 29 : NumberOfDays[Month - 1];
}

short NumberOfDaysFromBeginningOfYear(short Day, short Month, short Year)
{
    short TotalDays = Day;

    for (short i = 1; i <= Month - 1; i++)
    {
        TotalDays += NumberOfDaysInAMonth(i, Year);
    }

    return TotalDays;
}

int main()
{
    short Day = ReadDay();
    short Month = ReadMonth();
    short Year = ReadYear();

    cout << "\n Number of days from the beginning of the year is " << NumberOfDaysFromBeginningOfYear(Day, Month, Year) << endl;

    system("pause>0");
    return 0;
}