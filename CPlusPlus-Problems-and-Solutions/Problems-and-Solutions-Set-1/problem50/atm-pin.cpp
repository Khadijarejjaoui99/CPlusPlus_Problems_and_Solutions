#include <iostream>
using namespace std;

string ReadPIN()
{
    string PIN;

    cout << "Please enter ATM PIN:\n";
    cin >> PIN;

    return PIN;
}

void CheckPIN(string PIN)
{
    if (PIN == "1234")
        cout << "Your Balance is: 7800\n";
    else
        cout << "Wrong PIN\n";
}

int main()
{
    CheckPIN(ReadPIN());
    return 0;
}