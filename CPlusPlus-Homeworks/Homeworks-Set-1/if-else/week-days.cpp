#include <iostream>
using namespace std;

int ReadWeekDay()
{
    int WeekDay;
    cout << "Please enter the week day:\n";
    cin >> WeekDay;
    return WeekDay;
}

void PrintWeekDay(int WeekDay)
{
    if (WeekDay == 1)
        cout << "Sunday\n";
    else if (WeekDay == 2)
        cout << "Monday\n";
    else if (WeekDay == 3)
        cout << "Tuesday\n";
    else if (WeekDay == 4)
        cout << "Wednesday\n";
    else if (WeekDay == 5)
        cout << "Thursday\n";
    else if (WeekDay == 6)
        cout << "Friday\n";
    else if (WeekDay == 7)
        cout << "Saturday\n";
    else
        cout << "Wrong day number\n";
}

int main()
{
    PrintWeekDay(ReadWeekDay());

    return 0;
}