#include <iostream>
using namespace std;

short ReadYear()
{
    int Year;

    cout << "Please enter a year to check: ";
    cin >> Year;

    return Year;
}

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

int main()
{
    short Year = ReadYear();

    if (isLeapYear(Year))
        cout << "\n Yes, [" << Year << "] is a Leap Year\n";
    else
        cout << "\n No, [" << Year << "] is NOT a Leap Year\n";

    system("pause>0");
    return 0;
}