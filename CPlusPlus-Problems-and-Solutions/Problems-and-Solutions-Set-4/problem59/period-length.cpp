#include <iostream>
using namespace std;

struct stDate
{
    short Day, Month, Year;
};

struct stPeriod
{
    stDate StartDate, EndDate;
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

stPeriod ReadPeriod()
{
    stPeriod Period;

    cout << "Enter Start Date:\n";
    Period.StartDate = ReadFullDate();

    cout << "\nEnter End Date:\n";
    Period.EndDate = ReadFullDate();

    return Period;
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

bool isDate1BeforeDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

bool isLastDayInMonth(stDate Date)
{
    return (Date.Day == NumberOfDaysInMonth(Date.Month, Date.Year));
}

bool isLastMonthInYear(short Month)
{
    return (Month == 12);
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
    {
        Date.Day++;
    }

    return Date;
}

int GetDifferenceInDays(stDate Date1, stDate Date2, bool IncludeEndDate = false)
{
    int DaysCount = 0;

    while (isDate1BeforeDate2(Date1, Date2))
    {
        DaysCount++;
        Date1 = IncreaseDateByOneDay(Date1);
    }

    return IncludeEndDate ? ++DaysCount : DaysCount;
}

int GetPeriodLengthInDays(stPeriod Period, bool IncludeEndDate = false)
{
    return GetDifferenceInDays(Period.StartDate, Period.EndDate, IncludeEndDate);
}

int main()
{
    stPeriod Period = ReadPeriod();

    cout << "\nPeriod Length is: " << GetPeriodLengthInDays(Period) << endl;
    cout << "Period Length (Including End Date): " << GetPeriodLengthInDays(Period, true) << endl;

    system("pause>0");
    return 0;
}