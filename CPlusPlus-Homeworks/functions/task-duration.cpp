#include <iostream>
using namespace std;

void TaskDuration(int DurationInDSeconds)
{
    const int SecondsPerDay = 24 * 60 * 60;
    const int SecondsPerHours = 60 * 60;
    const int SecondsPerMinute = 60;
    int Remainder, NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;

    NumberOfDays = DurationInDSeconds / SecondsPerDay;
    Remainder = DurationInDSeconds % SecondsPerDay;
    NumberOfHours = Remainder / SecondsPerHours;
    Remainder = Remainder % SecondsPerHours;
    NumberOfMinutes = Remainder / SecondsPerMinute;
    Remainder = Remainder % SecondsPerMinute;
    NumberOfSeconds = Remainder;

    cout << NumberOfDays << ":" << NumberOfHours << ":" << NumberOfMinutes << ":" << NumberOfSeconds;
}

int main()
{
    int DurationInDSeconds;
    cout << "Please enter the duration in seconds:\n";
    cin >> DurationInDSeconds;

    TaskDuration(DurationInDSeconds);

    return 0;
}