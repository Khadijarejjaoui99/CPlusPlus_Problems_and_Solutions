#include <iostream>
using namespace std;

short ReadDay()
{
    short Day;

    cout << "\nPlease enter a day: ";
    cin >> Day;

    return Day;
}

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

short GetDayOrder(short Day, short Month, short Year)
{
    short a, m, y;

    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;

    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

string DayShortName(short DayOrder)
{
    string DayNames[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    return DayNames[DayOrder];
}

int main()
{
    short Year = ReadYear();
    short Month = ReadMonth();
    short Day = ReadDay();
    short DayOrder = GetDayOrder(Day, Month, Year);

    cout << "\nDate      : " << Day << "/" << Month << "/" << Year << endl;
    cout << "Day Order : " << DayOrder << endl;
    cout << "Day Name  : " << DayShortName(DayOrder) << endl;

    system("pause>0");
    return 0;
}