#include <iostream>
using namespace std;

int ReadPositiveNumber()
{
    int Number;

    cout << "Please enter a positive number:\n";
    cin >> Number;

    while (Number < 0)
    {
        cout << "Wrong Input! Please enter a positive number:\n";
        cin >> Number;
    }

    return Number;
}

int CountNumberOfDifgits(int Number)
{
    if (Number == 0)
    {
        return 1;
    }

    int Counter = 0;

    while (Number > 0)
    {
        Number = Number / 10;
        Counter++;
    }

    return Counter;
}

int main()
{
    cout << "Count of digits is: " << CountNumberOfDifgits(ReadPositiveNumber()) << endl;

    return 0;
}