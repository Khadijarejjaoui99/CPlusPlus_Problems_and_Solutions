#include <iostream>
using namespace std;

int main()
{
    int pennies, nickels, dimes, quarters, dollars, TotalPennies;
    float TotalDollars;
    cout << "Please enter number of pennies: \n";
    cin >> pennies;
    cout << "Please enter number of nickels: \n";
    cin >> nickels;
    cout << "Please enter number of dimes: \n";
    cin >> dimes;
    cout << "Please enter number of quarters: \n";
    cin >> quarters;
    cout << "Please enter number of dollar: \n";
    cin >> dollars;

    TotalPennies = pennies + nickels * 5 + dimes * 10 + quarters * 25 + dollars * 100;
    TotalDollars = TotalPennies / 100;
    cout << "Total dollars = " << TotalDollars << endl;
    cout << "Total pennies = " << TotalPennies << endl;
}