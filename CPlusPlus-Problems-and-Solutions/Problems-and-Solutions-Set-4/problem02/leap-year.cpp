#include <iostream>
using namespace std;

short ReadYear()
{
    int Year;

    cout << "Please enter a year to check: ";
    cin >> Year;

    return Year;
}

bool IsLeapYear(short Year)
{
    if (Year % 400 == 0)
        return true;
    else if (Year % 100 == 0)
        return false;
    else if (Year % 4 == 0)
        return true;
    else
        return false;
}

int main()
{
    short Year = ReadYear();

    if (IsLeapYear(Year))
        cout << "\n Yes, [" << Year << "] Is a Leap Year\n";
    else
        cout << "\n No, [" << Year << "] Is NOT a Leap Year\n";

    system("pause>0");
    return 0;
}