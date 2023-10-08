#include <iostream>
using namespace std;

enum enDateCompare
{
    Before = -1,
    Equal = 0,
    After = 1
};

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

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

bool IsDate1EqualToDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year == Date2.Year) ? (Date1.Month == Date2.Month ? Date1.Day == Date2.Day : false) : false;
}

bool IsDate1AfterDate2(stDate Date1, stDate Date2)
{
    // return (Date1.Year > Date2.Year ? true : (Date1.Year == Date2.Year ? (Date1.Month > Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day > Date2.Day : false)) : false));
    return (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualToDate2(Date1, Date2));
}

enDateCompare CompareDates(stDate Date1, stDate Date2)
{
    if (IsDate1BeforeDate2(Date1, Date2))
        return enDateCompare::Before;

    if (IsDate1EqualToDate2(Date1, Date2))
        return enDateCompare::Equal;

    // if (isDate1AfterToDate2(Date1, Date2))
    //     return enDateCompare::After;

    return enDateCompare::After;
}

bool IsPeriodsOverlap(stPeriod Period1, stPeriod Period2)
{
    // if (CompareDates(Period2.EndDate, Period1.StartDate) == enDateCompare::Before || CompareDates(Period2.StartDate, Period1.EndDate) == enDateCompare::After)
    //     return false;
    // else
    //     return true;

    return !(IsDate1BeforeDate2(Period2.EndDate, Period1.StartDate) || IsDate1AfterDate2(Period2.StartDate, Period1.EndDate));
}

bool IsDateInPeriod(stDate Date, stPeriod Period)
{
    return !(CompareDates(Date, Period.StartDate) == enDateCompare::Before || CompareDates(Date, Period.EndDate) == enDateCompare::After);
}

int GetDifferenceInDays(stDate Date1, stDate Date2, bool IncludeEndDate = false)
{
    int DaysCount = 0;

    while (IsDate1BeforeDate2(Date1, Date2))
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

short OverlapDaysCount(stPeriod Period1, stPeriod Period2)
{
    if (!IsPeriodsOverlap(Period1, Period2))
        return 0;

    int Period1Length = GetPeriodLengthInDays(Period1, true);
    int Period2Length = GetPeriodLengthInDays(Period2, true);
    int OverlapDays = 0;

    if (Period1Length < Period2Length)
    {
        while (IsDate1BeforeDate2(Period1.StartDate, Period1.EndDate))
        {
            if (IsDateInPeriod(Period1.StartDate, Period2))
                OverlapDays++;

            Period1.StartDate = IncreaseDateByOneDay(Period1.StartDate);
        }
    }

    else
    {
        while (IsDate1BeforeDate2(Period2.StartDate, Period2.EndDate))
        {
            if (IsDateInPeriod(Period2.StartDate, Period1))
                OverlapDays++;

            Period2.StartDate = IncreaseDateByOneDay(Period2.StartDate);
        }
    }

    return OverlapDays;
}

int main()
{
    cout << "\nEnter Period 1:\n";
    stPeriod Period1 = ReadPeriod();
    cout << "\nEnter Period 2:\n";
    stPeriod Period2 = ReadPeriod();

    cout << "\nOverlap days Count is: " << OverlapDaysCount(Period1, Period2) << endl;
    system("pause>0");
    return 0;
}