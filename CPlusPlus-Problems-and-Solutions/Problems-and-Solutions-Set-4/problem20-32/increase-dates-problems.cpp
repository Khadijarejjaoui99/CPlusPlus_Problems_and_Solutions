#include <iostream>
using namespace std;

struct stDate
{
    short Day, Month, Year;
};

short ReadDay()
{
    short Day;

    cout << "\nPlease enter a Day: ";
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
            Date.Day = 1;
            Date.Month++;
        }
    }
    else
        Date.Day++;

    return Date;
}

stDate IncreaseDateByXDays(stDate Date, short Days)
{
    for (short i = 1; i <= Days; i++)
    {
        Date = IncreaseDateByOneDay(Date);
    }
    return Date;
}

stDate IncreaseDateByOneWeek(stDate Date)
{

    // for(short i = 1; i <= 7; i++)
    // {
    //     Date = IncreaseDateByOneDay(Date);
    // }

    Date = IncreaseDateByXDays(Date, 7);

    return Date;
}

stDate IncreaseDateByXWeeks(stDate Date, short Weeks)
{
    for (short i = 1; i <= Weeks; i++)
    {
        Date = IncreaseDateByOneWeek(Date);
    }
    return Date;
}

stDate IncreaseDateByOneMonth(stDate Date)
{
    if (isLastMonthInYear(Date.Month))
    {
        Date.Month = 1;
        Date.Year++;
    }
    else
        Date.Month++;

    if (Date.Day > NumberOfDaysInMonth(Date.Month, Date.Year))
        Date.Day = NumberOfDaysInMonth(Date.Month, Date.Year);

    return Date;
}

stDate IncreaseDateByXMonths(stDate Date, short Months)
{
    for (short i = 1; i <= Months; i++)
    {
        Date = IncreaseDateByOneMonth(Date);
    }

    return Date;
}

stDate IncreaseDateByOneYear(stDate Date)
{
    Date.Year++;
    return Date;
}

stDate IncreaseDateByXYears(stDate Date, short Years)
{
    for (short i = 1; i <= Years; i++)
    {
        Date = IncreaseDateByOneYear(Date);
    }
    return Date;
}

stDate IncreaseDateByXYearsFaster(stDate Date, short Years)
{
    Date.Year += Years;
    return Date;
}

stDate IncreaseDateByOneDecade(stDate Date)
{
    Date.Year += 10;
    return Date;
}

stDate IncreaseDateByXDecades(stDate Date, short Decades)
{

    for (short i = 1; i <= Decades; i++)
    {
        Date = IncreaseDateByOneDecade(Date);
    }
    return Date;
}

stDate IncreaseDateByXDecadesFaster(stDate Date, short Decades)
{

    Date.Year += Decades * 10;

    return Date;
}

stDate IncreaseDateByOneCentury(stDate Date)
{

    Date.Year += 100;

    return Date;
}

stDate IncreaseDateByOneMillennium(stDate Date)
{

    Date.Year += 1000;

    return Date;
}

int main()
{
    stDate Date = ReadFullDate();

    cout << "\n\nDate After:\n\n";

    Date = IncreaseDateByOneDay(Date);
    cout << "01-Adding one day is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = IncreaseDateByXDays(Date, 10);
    cout << "02-Adding " << 10 << " days is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = IncreaseDateByOneWeek(Date);
    cout << "03-Adding one week is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = IncreaseDateByXWeeks(Date, 10);
    cout << "04-Adding " << 10 << " weeks is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = IncreaseDateByOneMonth(Date);
    cout << "05-Adding one month is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = IncreaseDateByXMonths(Date, 5);
    cout << "06-Adding " << 5 << " months is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = IncreaseDateByOneYear(Date);
    cout << "07-Adding one year is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = IncreaseDateByXYears(Date, 10);
    cout << "08-Adding " << 10 << " years is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = IncreaseDateByXYearsFaster(Date, 10);
    cout << "09-Adding " << 10 << " years (Faster) is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = IncreaseDateByOneDecade(Date);
    cout << "10-Adding one decade is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = IncreaseDateByXDecades(Date, 10);
    cout << "11-Adding " << 10 << " decades is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = IncreaseDateByXDecadesFaster(Date, 10);
    cout << "12-Adding " << 10 << " decades (Faster) is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = IncreaseDateByOneCentury(Date);
    cout << "13-Adding one century is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = IncreaseDateByOneMillennium(Date);
    cout << "14-Adding one millennium is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    system("pause>0");
    return 0;
}