#include <iostream>
using namespace std;

short ReadAge(string Msg)
{
    short Age;

    cout << Msg << endl;
    cin >> Age;

    return Age;
}

void ValidateAgeInBetween(short From, short To)
{
    short Age = ReadAge("Please enter your Age:");

    while (Age < From || Age > To)
    {
        cout << Age << " Is InValid Age!\n";
        Age = ReadAge("Please enter your Age again:");
    }

    cout << Age << " Is A Valid Age\n";
}

int main()
{
    ValidateAgeInBetween(18, 45);
    return 0;
}