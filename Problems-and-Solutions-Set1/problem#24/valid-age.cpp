#include <iostream>
using namespace std;

short ReadAge()
{
    short Age;
    cout << "Please enter your age:\n";
    cin >> Age;
    return Age;
}

bool ValidateAgeInRange(short Age, short From, short To)
{
    return (Age >= From && Age <= To);
}

void PrintResult(short Age)
{
    ValidateAgeInRange(Age, 18, 45) ? cout << Age << " Is A Valid Age\n" : cout << Age << " Is Invalid Age\n";
}

int main()
{
    PrintResult(ReadAge());
    return 0;
}