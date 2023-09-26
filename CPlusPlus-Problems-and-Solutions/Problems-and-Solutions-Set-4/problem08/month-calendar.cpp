#include <iostream>
using namespace std;

short ReadMonth()
{
    short Month;

    cout << "\nPlease enter a month: ";
    cin >> Month;

    return Month;
}

short ReadYear()
{
    short Year;

    cout << "\nPlease enter a year: ";
    cin >> Year;

    return Year;
}

string MonthShortName(short Month)
{
    string arrMonthNames[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jui", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    return arrMonthNames[Month - 1];
}

short GetDayOrder(short Day, short Month, short Year)
{
    short a, m, y;

    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;

    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;

    short NumberOfDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    return (Month == 2 && isLeapYear(Year)) ? 29 : NumberOfDays[Month - 1];
}

void PrintMonthCalendar(short Month, short Year)
{
    short Current = GetDayOrder(1, Month, Year);
    short NumberOfDays = NumberOfDaysInAMonth(Month, Year);

    printf("\n ________________%s_________________\n\n", MonthShortName(Month).c_str());
    cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n";

    short i;

    for (i = 0; i < Current; i++)
        printf("     ");

    for (short j = 1; j <= NumberOfDays; j++)
    {
        printf("%5d", j);

        if (++i == 7)
        {
            cout << endl;
            i = 0;
        }
    }

    printf("\n ____________________________________\n");
}

int main()
{
    short Year = ReadYear();
    short Month = ReadMonth();

    PrintMonthCalendar(Month, Year);

    system("pause>0");
    return 0;
}