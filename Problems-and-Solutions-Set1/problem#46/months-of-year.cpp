#include <iostream>
using namespace std;

enum enMonths
{
    Jan = 1,
    Feb = 2,
    Mar = 3,
    Apr = 4,
    May = 5,
    June = 6,
    July = 7,
    Aug = 8,
    Sep = 9,
    Oct = 10,
    Nov = 11,
    Dec = 12
};

int ReadNumbersInRange(string Msg, int From, int To)
{
    int Num;

    do
    {
        cout << Msg << endl;
        cin >> Num;
    } while (Num < From || Num > To);

    return Num;
}

enMonths ReadMonthNumber()
{
    int MonthNumber = ReadNumbersInRange("Please enter month number (1 to 12):", 1, 12);

    return (enMonths)MonthNumber;
}

string GetMonthName(enMonths Month)
{
    switch (Month)
    {
    case enMonths::Jan:
        return "January";
    case enMonths::Feb:
        return "February";
    case enMonths::Mar:
        return "March";
    case enMonths::Apr:
        return "April";
    case enMonths::May:
        return "May";
    case enMonths::June:
        return "June";
    case enMonths::July:
        return "July";
    case enMonths::Aug:
        return "August";
    case enMonths::Sep:
        return "September";
    case enMonths::Oct:
        return "October";
    case enMonths::Nov:
        return "November";
    case enMonths::Dec:
        return "December";
    default:
        return "Not a month of the year";
    }
}

int main()
{
    cout << GetMonthName(ReadMonthNumber()) << endl;
    return 0;
}