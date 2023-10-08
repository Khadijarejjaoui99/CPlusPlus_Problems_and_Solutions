#include <iostream>
using namespace std;

struct stDate
{
    short Day, Month, Year;
};

short ReadDay()
{
    short Day;

    cout << "Please enter a Day: ";
    cin >> Day;

    return Day;
}

short ReadMonth()
{
    short Month;

    cout << "Please enter a Month: ";
    cin >> Month;

    return Month;
}

short ReadYear()
{
    short Year;

    cout << "Please enter a Year: ";
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

bool isDate1BeforeDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
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

bool isWeekEnd(stDate Date)
{
    short DayIndex = DayOfWeekOrder(Date);
    return (DayIndex == 5 || DayIndex == 6);
}

short GetVacationDays(stDate DateFrom, stDate DateTo)
{
    short Days = 0;

    while (isDate1BeforeDate2(DateFrom, DateTo))
    {
        if (!isWeekEnd(DateFrom))
            Days++;

        DateFrom = IncreaseDateByOneDay(DateFrom);
    }

    return Days;
}

int main()
{
    cout << "\nVacation Starts:\n";
    stDate DateFrom = ReadFullDate();
    cout << "\nVacation Ends:\n";
    stDate DateTo = ReadFullDate();

    cout << "\nVacation From: " << DayShortName(DayOfWeekOrder(DateFrom)) << ", " << DateFrom.Day << "/" << DateFrom.Month << "/" << DateFrom.Year << endl;
    cout << "Vacation To: " << DayShortName(DayOfWeekOrder(DateTo)) << ", " << DateTo.Day << "/" << DateTo.Month << "/" << DateTo.Year << endl;

    cout << "\nActual Vacation Days is: " << GetVacationDays(DateFrom, DateTo) << endl;

    system("pause>0");
    return 0;
}