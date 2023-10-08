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

int main()
{
    cout << "\nEnter Date1:\n";
    stDate Date1 = ReadFullDate();
    cout << "\nEnter Date2:\n";
    stDate Date2 = ReadFullDate();

    cout << "\nCompare Result = " << CompareDates(Date1, Date2) << endl;

    system("pause>0");
    return 0;
}