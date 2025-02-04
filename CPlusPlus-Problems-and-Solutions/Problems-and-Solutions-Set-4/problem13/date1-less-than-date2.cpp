#include <iostream>
using namespace std;

struct stDate
{
    short Day, Month, Year;
};

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

    cout << " Please enter a month: ";
    cin >> Month;

    return Month;
}

short ReadYear()
{
    short Year;

    cout << " Please enter a year: ";
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

int main()
{
    stDate Date1 = ReadFullDate();
    stDate Date2 = ReadFullDate();

    if (isDate1BeforeDate2(Date1, Date2))
        cout << "\n Yes, Date1 is less than Date2\n";
    else
        cout << "\n No, Date1 is Not less than Date2\n";

    system("pause>0");
    return 0;
}