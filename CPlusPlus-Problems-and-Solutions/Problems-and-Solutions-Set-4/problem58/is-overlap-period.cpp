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

bool isDate1BeforeDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

bool isDate1EqualToDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year == Date2.Year) ? (Date1.Month == Date2.Month ? Date1.Day == Date2.Day : false) : false;
}

bool isDate1AfterDate2(stDate Date1, stDate Date2)
{
    // return (Date1.Year > Date2.Year ? true : (Date1.Year == Date2.Year ? (Date1.Month > Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day > Date2.Day : false)) : false));
    return (!isDate1BeforeDate2(Date1, Date2) && !isDate1EqualToDate2(Date1, Date2));
}

enDateCompare CompareDates(stDate Date1, stDate Date2)
{
    if (isDate1BeforeDate2(Date1, Date2))
        return enDateCompare::Before;

    if (isDate1EqualToDate2(Date1, Date2))
        return enDateCompare::Equal;

    // if (isDate1AfterToDate2(Date1, Date2))
    //     return enDateCompare::After;

    return enDateCompare::After;
}

bool isPeriodsOverlap(stPeriod Period1, stPeriod Period2)
{
    // if (CompareDates(Period2.EndDate, Period1.StartDate) == enDateCompare::Before || CompareDates(Period2.StartDate, Period1.EndDate) == enDateCompare::After)
    //     return false;
    // else
    //     return true;

    return !(isDate1BeforeDate2(Period2.EndDate, Period1.StartDate) || isDate1AfterDate2(Period2.StartDate, Period1.EndDate));
}

int main()
{
    cout << "\nEnter Period 1:\n";
    stPeriod Period1 = ReadPeriod();
    cout << "\nEnter Period 2:\n";
    stPeriod Period2 = ReadPeriod();

    if (isPeriodsOverlap(Period1, Period2))
        cout << "\nYes, Periods Overlap.\n";
    else
        cout << "\nNo, Periods Do Not Overlap.\n";
    system("pause>0");
    return 0;
}