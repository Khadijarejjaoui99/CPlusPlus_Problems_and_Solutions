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
    int Counter = 3;
    string PIN;
    do
    {
        Counter--;
        PIN = ReadPIN();
        if (PIN == "1234")
            return true;
        else
        {
            cout << "Wrong PIN\n";
            system("color 4F");
        }

    } while (PIN != "1234" && Counter >= 1);
    return 0;
}

int main()
{
    if (Login())
    {
        system("color 2F");

        cout << "Your Balance is: " << 7800 << endl;
    }
    else
    {
        cout << "Your Card is Blocked\n";
    }
    return 0;
}