#include <iostream>
using namespace std;

void PasswordValidator()
{
    string Password;

    cout << "Please enter your password:\n";
    cin >> Password;

    while (Password != "12345AB")
    {
        cout << "Wrong Password! Please Try Again\n";
        cin >> Password;
    }

    cout << "\nYour Password is correct :)\n";
}

int main()
{
    PasswordValidator();
    return 0;
}