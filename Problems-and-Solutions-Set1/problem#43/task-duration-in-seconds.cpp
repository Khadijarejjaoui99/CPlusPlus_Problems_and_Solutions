#include <iostream>
using namespace std;

struct stTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Msg)
{
    int Number;

    do
    {
        cout << Msg << endl;
        cin >> Number;
    } while (Number < 0);

    return Number;
}

stTaskDuration ReadTaskDuration()
{
    stTaskDuration TaskDuration;

    TaskDuration.NumberOfDays = ReadPositiveNumber("Please Enter Number Of Days");
    TaskDuration.NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours");
    TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please Enter Number Of Minutes");
    TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please Enter Number Of Seconds");

    return TaskDuration;
}

int DaysToSeconds(int NumberOfDays)
{
    return NumberOfDays * 24 * 60 * 60;
}

int HoursToSeconds(int NumberOfHours)
{
    return NumberOfHours * 60 * 60;
}

int MinutesToSeconds(int NumberOfMinutes)
{
    return NumberOfMinutes * 60;
}

int GetTotalNumberOfSeconds(stTaskDuration TaskDuration)
{
    int TotalNumberOfSeconds = DaysToSeconds(TaskDuration.NumberOfDays) + HoursToSeconds(TaskDuration.NumberOfHours) + MinutesToSeconds(TaskDuration.NumberOfMinutes) + TaskDuration.NumberOfSeconds;

    return TotalNumberOfSeconds;
}

int main()
{

    cout << "Total Number Of Seconds = " << GetTotalNumberOfSeconds(ReadTaskDuration()) << endl;

    return 0;
}