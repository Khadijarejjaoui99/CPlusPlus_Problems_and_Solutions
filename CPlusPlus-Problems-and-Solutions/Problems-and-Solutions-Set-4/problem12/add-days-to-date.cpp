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

    cout << "\n Please enter a month: ";
    cin >> Month;

    return Month;
}

short ReadYear()
{
    short Year;

    cout << "\n Please enter a year: ";
    cin >> Year;

    return Year;
}

int ReadDaysToAdd()
{
    short DaysToAdd;

    cout << "\n How many days to add? ";
    cin >> DaysToAdd;

    return DaysToAdd;
}

stDate ReadFullDate()
{
    stDate Date;

    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();

    return Date;
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

short NumberOfDaysFromBeginningOfYear(short Day, short Month, short Year)
{
    short TotalDays = Day;

    for (short i = 1; i <= Month - 1; i++)
    {
        TotalDays += NumberOfDaysInAMonth(i, Year);
    }

    return TotalDays;
}

stDate AddDaysToDate(stDate Date, int DaysToAdd)
{
    int RemainingDays = DaysToAdd + NumberOfDaysFromBeginningOfYear(Date.Day, Date.Month, Date.Year);
    short DaysInAMonth;

    Date.Month = 1;

    while (true)
    {
        DaysInAMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

        if (RemainingDays > DaysInAMonth)
        {
            RemainingDays -= DaysInAMonth;
            Date.Month++;

            if (Date.Month > 12)
            {
                Date.Year++;
                Date.Month = 1;
            }
        }
        else
        {
            Date.Day = RemainingDays;
            break;
        }
    }

    return Date;
}

int main()
{
    stDate Date = ReadFullDate();
    int DaysToAdd = ReadDaysToAdd();

    stDate NewDate = AddDaysToDate(Date, DaysToAdd);

    printf("\n Date after adding [%d]: %02d/%02d/%d", DaysToAdd, NewDate.Day, NewDate.Month, NewDate.Year);

    system("pause>0");
    return 0;
}