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
    if (islower(C) != 0)
        cout << C << " is a Lower Case Letter\n";
    else
        cout << C << " is Not a Lower Case Letter\n";
}

int main()
{
    PrintResult(ReadCharacter());
    return 0;
}