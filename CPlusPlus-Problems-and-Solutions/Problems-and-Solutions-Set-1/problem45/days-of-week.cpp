#include <iostream>
using namespace std;

enum enDays
{
    Sun = 1,
    Mon = 2,
    Tue = 3,
    Wed = 4,
    Thu = 5,
    Fri = 6,
    Sat = 7
};

int ReadNumberInRange(string Msg, int From, int To)
{
    int Num = 0;
    do
    {
        cout << Msg << endl;
        cin >> Num;
    } while (Num < From || Num > To);
}

enDays ReadDayNumber()
{
    int DayNumber = ReadNumberInRange("Please enter day number between 1 and 7:", 1, 7);

    return (enDays)DayNumber;
}

string GetWeekDay(enDays Day)
{
    switch (Day)
    {
    case enDays::Sun:
        return "Sunday";
    case enDays::Mon:
        return "Monday";
    case enDays::Tue:
        return "Tuesday";
    case enDays::Wed:
        return "Wednesday";
    case enDays::Thu:
        return "Thursday";
    case enDays::Fri:
        return "Friday";
    case enDays::Sat:
        return "Saturday";
    default:
        return "Not a week Day";
    }
}

int main()
{
    cout << GetWeekDay(ReadDayNumber()) << endl;
    return 0;
}