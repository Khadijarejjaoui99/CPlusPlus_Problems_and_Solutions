#include <iostream>
using namespace std;

struct stTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadTotalNumberOfSeconds()
{
    int TotalNumberOfSeconds;

    do
    {
        cout << "Please Enter Number Of Seconds:\n";
        cin >> TotalNumberOfSeconds;
    } while (TotalNumberOfSeconds < 0);

    return TotalNumberOfSeconds;
}

stTaskDuration GetTaskDuration(int TotalNumberOfSeconds)
{
    const int SECONDS_PER_DAY = 24 * 60 * 60;
    const int SECONDS_PER_HOURS = 60 * 60;
    const int SECONDS_PER_MINUTES = 60;

    stTaskDuration TaskDuration;
    int Remainder = 0;

    TaskDuration.NumberOfDays = TotalNumberOfSeconds / SECONDS_PER_DAY;
    Remainder = TotalNumberOfSeconds % SECONDS_PER_DAY;

    TaskDuration.NumberOfHours = Remainder / SECONDS_PER_HOURS;
    Remainder %= SECONDS_PER_HOURS;

    TaskDuration.NumberOfMinutes = Remainder / SECONDS_PER_MINUTES;
    Remainder %= SECONDS_PER_MINUTES;

    TaskDuration.NumberOfSeconds = Remainder;

    return TaskDuration;
}

void PrintTaskDuration(stTaskDuration TaskDuration)
{
    cout << endl;
    cout << TaskDuration.NumberOfDays << ":" << TaskDuration.NumberOfHours << ":" << TaskDuration.NumberOfMinutes << ":" << TaskDuration.NumberOfSeconds << endl;
}

int main()
{
    PrintTaskDuration(GetTaskDuration(ReadTotalNumberOfSeconds()));

    return 0;
}