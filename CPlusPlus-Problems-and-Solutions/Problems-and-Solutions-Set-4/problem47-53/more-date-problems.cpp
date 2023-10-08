#include <iostream>
#include <ctime>
using namespace std;

struct stDate
{
    short Day, Month, Year;
};

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;

    short NumberOfDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    return (Month == 2 && isLeapYear(Year)) ? 29 : NumberOfDays[Month - 1];
}

short DayOfWeekOrder(stDate Date)
{
    short a, y, m;

    a = (14 - Date.Month) / 12;

    y = Date.Year - a;

    m = Date.Month + (12 * a) - 2;

    return (Date.Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

string DayShortName(short DayOrderInWeek)
{
    string DayName[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    return DayName[DayOrderInWeek];
}

stDate GetSystemDate()
{
    stDate Date;

    time_t t = time(0);
    tm *now = localtime(&t);

    Date.Day = now->tm_mday;
    Date.Month = now->tm_mon + 1;
    Date.Year = now->tm_year + 1900;

    return Date;
}

bool isEndOfWeek(stDate Date)
{
    return DayOfWeekOrder(Date) == 6;
}

bool isWeekEnd(stDate Date)
{
    short DayIndex = DayOfWeekOrder(Date);
    return (DayIndex == 5 || DayIndex == 6);
}

bool isBusinessDay(stDate Date)
{
    return !isWeekEnd(Date);
}

short DaysUntilEndOfWeek(stDate Date)
{
    return 6 - DayOfWeekOrder(Date);
}

bool isDate1BeforeDate2(stDate Date1, stDate Date2)
{
    return Date1.Year < Date2.Year ? true : (Date1.Year == Date2.Year ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

bool isLastDayInMonth(stDate Date)
{
    return Date.Day == NumberOfDaysInMonth(Date.Month, Date.Year);
}

bool isLastMonthInYear(short Month)
{
    return Month == 12;
}

stDate IncreaseDateByOneDay(stDate Date)
{
    if (isLastDayInMonth(Date))
    {
        if (isLastMonthInYear(Date.Month))
        {
            Date.Day = 1;
            Date.Month = 1;
            Date.Year++;
        }

        else
        {
            Date.Month++;
            Date.Day = 1;
        }
    }
    else
        Date.Day++;

    return Date;
}

short GetDifferenceInDays(stDate Date1, stDate Date2, bool IncludeEndDate = false)
{
    int Days = 0;

    while (isDate1BeforeDate2(Date1, Date2))
    {
        Days++;
        Date1 = IncreaseDateByOneDay(Date1);
    }

    return IncludeEndDate ? ++Days : Days;
}

short DaysUntilEndOfMonth(stDate Date)
{
    stDate EndMonthDate;

    EndMonthDate.Day = NumberOfDaysInMonth(Date.Month, Date.Year);
    EndMonthDate.Month = Date.Month;
    EndMonthDate.Year = Date.Year;

    return GetDifferenceInDays(Date, EndMonthDate, true);
}

short DaysUntilEndOfYear(stDate Date)
{
    stDate EndYearDate;

    EndYearDate.Day = 31;
    EndYearDate.Month = 12;
    EndYearDate.Year = Date.Year;

    return GetDifferenceInDays(Date, EndYearDate, true);
}

int main()
{
    stDate Date = GetSystemDate();

    cout << "Today is " << DayShortName(DayOfWeekOrder(Date)) << ", " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    cout << "\nIs it End of Week?\n";
    if (isEndOfWeek(Date))
        cout << "Yes, it is Saturday. It is End of Week\n";
    else
        cout << "No, it is Not End of Week\n";

    cout << "\nIs it Week End?\n";
    if (isWeekEnd(Date))
        cout << "Yes, it is Week End\n";
    else
        cout << "No, it is Not Week End\n";

    cout << "\nIs it Business Day?\n";
    if (isBusinessDay(Date))
        cout << "Yes, it is Business Day\n";
    else
        cout << "No, it is Not Business Day\n";

    cout << "\nDays Until End of Week: " << DaysUntilEndOfWeek(Date) << " Day(s)" << endl;
    cout << "Days Until End of Month: " << DaysUntilEndOfMonth(Date) << " Day(s)" << endl;
    cout << "Days Until End of Year: " << DaysUntilEndOfYear(Date) << " Day(s)" << endl;

    system("pause>0");
    return 0;
}