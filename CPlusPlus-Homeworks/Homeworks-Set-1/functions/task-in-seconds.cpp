#include <iostream>
using namespace std;

int TasksInSeconds(int NumberOfDays, int NumberOfHours, int NumberOfMinutes, int NumberOfSeconds)
{
    int TotalNumberOfSeconds;

    int DaysToSeconds = NumberOfDays * 24 * 60 * 60;
    int HoursToSeconds = NumberOfHours * 60 * 60;
    int MinutesToSeconds = NumberOfMinutes * 60;

    TotalNumberOfSeconds = DaysToSeconds + HoursToSeconds + MinutesToSeconds + NumberOfSeconds;

    return TotalNumberOfSeconds;
}

int main()
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds, TotalNumberOfSeconds;

    cout << "Please enter number of days:\n";
    cin >> NumberOfDays;
    cout << "Please enter number of hours:\n";
    cin >> NumberOfHours;
    cout << "Please enter number of minutes:\n";
    cin >> NumberOfMinutes;
    cout << "Please enter number of seconds:\n";
    cin >> NumberOfSeconds;

    TotalNumberOfSeconds = TasksInSeconds(NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds);

    cout << "Task in second is: " << TotalNumberOfSeconds << " seconds" << endl;
}