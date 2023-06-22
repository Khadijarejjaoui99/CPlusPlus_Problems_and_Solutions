#include <iostream>
using namespace std;

void ReadPIN(string &PIN, string Msg)
{
    cout << Msg << endl;
    cin >> PIN;
}

void PinValidator()
{
    string PIN;
    int Counter = 1;

    ReadPIN(PIN, "Please enter your PIN:");

    while (PIN != "1234" && Counter < 3)
    {
        ReadPIN(PIN, "Wrong PIN, Please Try Again:");
        Counter++;
    }

    if (Counter == 3)
    {
        cout << "Card id Locked!\n";
    }
    if (PIN == "1234")
    {
        cout << "Balance = 7800\n";
    }
}

int main()
{
    PinValidator();

    return 0;
}