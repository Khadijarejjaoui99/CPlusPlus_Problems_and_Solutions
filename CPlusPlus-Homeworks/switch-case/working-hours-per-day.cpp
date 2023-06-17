#include <iostream>
using namespace std;

enum enWeekDays
{
    Mon = 1,
    Tue = 2,
    Wed = 3,
    Thu = 4,
    Fri = 5,
    Sat = 6,
    Sun = 7
};

enWeekDays ReadWeekDay()
{
    int Day;
    cout << "*****************************************\n";
    cout << "Please choose day number:\n";
    cout << "(1) Monday\n";
    cout << "(2) Tuesday\n";
    cout << "(3) Wednesday\n";
    cout << "(4) Thursday\n";
    cout << "(5) Friday\n";
    cout << "(6) Saturday\n";
    cout << "(7) Sunday\n";
    cout << "*****************************************\n";
    cout << "Your choice: ";
    cin >> Day;

    return (enWeekDays)Day;
}

void PrintWorkingHours(enWeekDays WeekDay)
{
    switch (WeekDay)
    {
    case enWeekDays::Mon:
        cout << "Monday: 9:00 AM - 5:00 PM\n";
        break;
    case enWeekDays::Tue:
        cout << "Tuesday: 9:00 AM - 5:00 PM\n";
        break;
    case enWeekDays::Wed:
        cout << "Wednesday: 9:00 AM - 5:00 PM\n";
        break;
    case enWeekDays::Thu:
        cout << "Thursday: 9:00 AM - 5:00 PM\n";
        break;
    case enWeekDays::Fri:
        cout << "Friday: 9:00 AM - 5:00 PM\n";
        break;
    case enWeekDays::Sat:
    case enWeekDays::Sun:
        cout << "Day Off";
        break;
    default:
        cout << "Invalid Choice!\n";
    }
}

int main()
{
    enWeekDays WeekDay = ReadWeekDay();
    PrintWorkingHours(WeekDay);
    return 0;
}