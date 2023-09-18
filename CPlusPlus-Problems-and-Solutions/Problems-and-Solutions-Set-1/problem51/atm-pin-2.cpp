#include <iostream>
using namespace std;

string ReadPIN()
{
    string PIN;

    cout << "Please enter ATM PIN:\n";
    cin >> PIN;

    return PIN;
}

bool Login()
{
    string PIN;
    do
    {
        PIN = ReadPIN();
        if (PIN == "1234")
            return true;

        cout << "Wrong PIN\n";
        system("color 4F");

    } while (PIN != "1234");
}

int main()
{
    if (Login())
    {
        system("color 2F");

        cout << "Your Balance is: " << 7800 << endl;
    }
    return 0;
}