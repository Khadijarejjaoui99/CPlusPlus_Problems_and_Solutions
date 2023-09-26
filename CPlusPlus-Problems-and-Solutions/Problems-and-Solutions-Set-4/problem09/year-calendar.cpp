#include <iostream>
using namespace std;

short ReadYear()
{
    short Year;

    cout << "\n Please enter a year: ";
    cin >> Year;

    return Year;
}

string MonthShortName(short Month)
{
    string MonthNames[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jui", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    return MonthNames[Month - 1];
}

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    short NumberOfDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    return (Month == 2 && isLeapYear(Year)) ? 29 : NumberOfDays[Month - 1];
}

short GetDayOrder(short Day, short Month, short Year)
{
    short a, m, y;

    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;

    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

void PrintMonthCalendar(short Month, short Year)
{
    short NumberOfDays = NumberOfDaysInAMonth(Month, Year);
    short Current = GetDayOrder(1, Month, Year);

    printf("\n  _______________%s_______________\n\n", MonthShortName(Month).c_str());
    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    short i;

    for (i = 0; i < Current; i++)
        printf("     ");

    for (int j = 1; j <= NumberOfDays; j++)
    {
        printf("%5d", j);

        if (++i == 7)
        {
            cout << endl;
            i = 0;
        }
    }

    if (i == 0)
        printf("  _________________________________\n");
    else
        printf("\n  _________________________________\n");
}

void PrintYearCalendar(short Year)
{
    printf("\n  _________________________________\n\n");
    printf("\t   Calendar - %d\n", Year);
    printf("  _________________________________\n");

    for (int i = 1; i <= 12; i++)
    {
        PrintMonthCalendar(i, Year);
    }
}

int main()
{
    PrintYearCalendar(ReadYear());
    system("pause>0");
    return 0;
}