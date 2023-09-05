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
    if (isupper(C) != 0)
        cout << C << " is an Upper Case Letter\n";
    else
        cout << C << " is Not an Upper Case Letter\n";
}

int main()
{
    PrintResult(ReadCharacter());
    return 0;
}