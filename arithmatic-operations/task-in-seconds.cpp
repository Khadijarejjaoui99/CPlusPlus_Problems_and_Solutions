#include <iostream>
using namespace std;

int main()
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds, DaysToSeconds,
        HoursToSeconds, MinutesToSeconds, TotalNumberOfSeconds;
    cout << "Please enter number of days: \n";
    cin >> NumberOfDays;
    cout << "Please enter number of hours: \n";
    cin >> NumberOfHours;
    cout << "Please enter number of minutes: \n";
    cin >> NumberOfMinutes;
    cout << "Please enter number of seconds: \n";
    cin >> NumberOfSeconds;
    DaysToSeconds = NumberOfDays * 24 * 60 * 60;
    HoursToSeconds = NumberOfHours * 60 * 60;
    MinutesToSeconds = NumberOfMinutes * 60;
    TotalNumberOfSeconds = DaysToSeconds + HoursToSeconds + MinutesToSeconds + NumberOfSeconds;

    cout << TotalNumberOfSeconds << "s\n";
}