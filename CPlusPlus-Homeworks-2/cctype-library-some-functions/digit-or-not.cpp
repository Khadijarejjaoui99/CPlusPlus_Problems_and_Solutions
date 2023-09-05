#include <iostream>
#include <cctype>
using namespace std;

char ReadCharacter()
{
    char C;

    cout << "Please enter a character:\n";
    cin >> C;

    return C;
}

void PrintResult(char C)
{
    if (isdigit(C) != 0)
        cout << C << " is a Digit\n";
    else
        cout << C << " is Not a Digit\n";
}

int main()
{
    PrintResult(ReadCharacter());
    return 0;
}