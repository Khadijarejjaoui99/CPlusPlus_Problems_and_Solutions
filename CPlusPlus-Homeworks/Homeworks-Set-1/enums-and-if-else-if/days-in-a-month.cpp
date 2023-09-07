#include <iostream>
using namespace std;

enum enMonths
{
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12
};

int main()
{
    int C;
    enMonths Month;
    cout << "***********************************\n";
    cout << "Please choice the month number:\n";
    cout << "(1) January\n";
    cout << "(2) February\n";
    cout << "(3) March\n";
    cout << "(4) April\n";
    cout << "(5) May\n";
    cout << "(6) June\n";
    cout << "(7) July\n";
    cout << "(8) August\n";
    cout << "(9) September\n";
    cout << "(10) October\n";
    cout << "(11) November\n";
    cout << "(12) December\n";
    cout << "***********************************\n";
    cout << "Your choice: ";
    cin >> C;

    Month = (enMonths)C;

    if (Month == enMonths::January)
        cout << "January: 31 days\n";
    else if (Month == enMonths::February)
        cout << "February: 28 or 29 days (depending on leap year)\n";
    else if (Month == enMonths::March)
        cout << "March: 31 days\n";
    else if (Month == enMonths::April)
        cout << "April: 30 days\n";
    else if (Month == enMonths::May)
        cout << "May: 31 days\n";
    else if (Month == enMonths::June)
        cout << "June: 30 days\n";
    else if (Month == enMonths::July)
        cout << "July: 31 days\n";
    else if (Month == enMonths::August)
        cout << "August: 31 days\n";
    else if (Month == enMonths::September)
        cout << "September: 30 days\n";
    else if (Month == enMonths::October)
        cout << "October: 31 days\n";
    else if (Month == enMonths::November)
        cout << "November: 30 days\n";
    else if (Month == enMonths::December)
        cout << "December: 31 days\n";
    else
        cout << "Invalid choice\n";

    return 0;
}