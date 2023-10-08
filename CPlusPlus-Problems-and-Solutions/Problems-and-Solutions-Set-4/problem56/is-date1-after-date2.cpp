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

int main()
{
    cout << "\nEnter Date1:\n";
    stDate Date1 = ReadFullDate();
    cout << "\nEnter Date2:\n";
    stDate Date2 = ReadFullDate();

    if (isDate1AfterDate2(Date1, Date2))
        cout << "\nYes, Date1 After Date2\n";
    else
        cout << "\nNo, Date1 is Not After Date2\n";

    system("pause>0");
    return 0;
}