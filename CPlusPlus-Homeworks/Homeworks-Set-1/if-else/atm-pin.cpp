#include <iostream>
using namespace std;

void ReadPIN(string &PIN)
{
    cout << "Please enter the ATM PIN:\n";
    cin >> PIN;
}
void PrintBalance(string PIN)
{
    if (PIN == "1234")
        cout << "Balance is: 7800\n";
    else
        cout << "Wrong PIN\n";
}
int main()
{
    string PIN;
    ReadPIN(PIN);
    PrintBalance(PIN);

    return 0;
}