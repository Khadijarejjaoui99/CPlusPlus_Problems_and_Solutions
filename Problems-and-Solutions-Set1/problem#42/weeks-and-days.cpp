#include <iostream>
using namespace std;

float ReadNumberOfHours()
{
    float NumberOfHours;

    do
    {
        cout << "Please enter number of hours:\n";
        cin >> NumberOfHours;
    } while (NumberOfHours <= 0);

    return NumberOfHours;
}

float HoursToWeeks(float NumberOfHours)
{
    return NumberOfHours / 24 / 7;
}

float HoursToDays(float NumberOfHours)
{
    return NumberOfHours / 24;
}
int main()
{
    int NumberOfHours = ReadNumberOfHours();

    cout << "\nNumber Of Hours = " << NumberOfHours << endl;
    cout << "Number Of Weeks = " << HoursToWeeks(NumberOfHours) << endl;
    cout << "Number Of Days = " << HoursToDays(NumberOfHours) << endl;

    return 0;
}