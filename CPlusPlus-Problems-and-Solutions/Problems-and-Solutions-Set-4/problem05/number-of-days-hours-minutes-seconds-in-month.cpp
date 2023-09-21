#include <iostream>
using namespace std;

short ReadNumber(string Msg)
{
    int Number;

    cout << Msg;
    cin >> Number;

    return Number;
}

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Year, short Month)
{
    if (Month < 1 || Month > 12)
        return 0;
    if (Month == 2)
        return isLeapYear(Year) ? 29 : 28;

    int arr31Days[7] = {1, 3, 5, 7, 8, 10, 12};

    for (short i = 0; i < 7; i++)
    {
        if (arr31Days[i] == Month)
            return 31;
    }

    return 30;
}

short NumberOfHoursInAMonth(short Year, short Month)
{
    return NumberOfDaysInAMonth(Year, Month) * 24;
}

int NumberOfMinutesInAMonth(short Year, short Month)
{
    return NumberOfHoursInAMonth(Year, Month) * 60;
}

int NumberOfSecondsInAMonth(short Year, short Month)
{
    return NumberOfMinutesInAMonth(Year, Month) * 60;
}

int main()
{
    short Year = ReadNumber("Please enter a year to check: ");
    short Month = ReadNumber("Please enter a month to check: ");

    cout << "\nNumber of Days   in Month[" << Month << "] is " << NumberOfDaysInAMonth(Year, Month) << endl;
    cout << "Number of Hours   in Month[" << Month << "] is " << NumberOfHoursInAMonth(Year, Month) << endl;
    cout << "Number of Minutes in Month[" << Month << "] is " << NumberOfMinutesInAMonth(Year, Month) << endl;
    cout << "Number of Seconds in Month[" << Month << "] is " << NumberOfSecondsInAMonth(Year, Month) << endl;
    system("pause>0");
    return 0;
}