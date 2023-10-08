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

    // if (IsDate1AfterToDate2(Date1, Date2))
    //     return enDateCompare::After;

    return enDateCompare::After;
}

bool IsDateInPeriod(stDate Date, stPeriod Period)
{
    return !(CompareDates(Date, Period.StartDate) == enDateCompare::Before || CompareDates(Date, Period.EndDate) == enDateCompare::After);
}

int main()
{
    cout << "\nEnter Period:\n";
    stPeriod Period = ReadPeriod();

    cout << "\nEnter Date to Check:\n";
    stDate Date = ReadFullDate();

    if (IsDateInPeriod(Date, Period))
        cout << "\nYes, Date is within Period.\n";
    else
        cout << "\nNo, Date is Not within Period.\n";
    system("pause>0");
    return 0;
}