#include <iostream>
using namespace std;

struct PiggyBankContents
{
    int Pennies, Nickles, Dimes, Quarters, Dollars;
};

PiggyBankContents ReadPiggyBankContents()
{
    PiggyBankContents PiggyBank;
    cout << "Please enter number of Pennies:\n";
    cin >> PiggyBank.Pennies;
    cout << "Please enter number of Nickles:\n";
    cin >> PiggyBank.Nickles;
    cout << "Please enter number of Dimes:\n";
    cin >> PiggyBank.Dimes;
    cout << "Please enter number of Quarters:\n";
    cin >> PiggyBank.Quarters;
    cout << "Please enter number of Dollars:\n";
    cin >> PiggyBank.Dollars;

    return PiggyBank;
}

int CalculateTotalPennies(PiggyBankContents PiggyBank)
{
    int TotalPennies = PiggyBank.Pennies + (PiggyBank.Nickles * 5) + (PiggyBank.Dimes * 10) + (PiggyBank.Quarters * 25) + (PiggyBank.Dollars * 100);
    return TotalPennies;
}

void PrintTotalPenniesAndDollars(PiggyBankContents PiggyBank)
{
    int TotalNumberOfPennies = CalculateTotalPennies(PiggyBank);

    cout << "Total Pennies is: " << TotalNumberOfPennies << endl;
    cout << "Total Dollars is: " << (float)TotalNumberOfPennies / 100 << endl;
}

int main()
{

    PrintTotalPenniesAndDollars(ReadPiggyBankContents());
    return 0;
}