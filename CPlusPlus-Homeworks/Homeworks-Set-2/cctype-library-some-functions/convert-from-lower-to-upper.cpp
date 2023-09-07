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

void PrintUpperCase(char C)
{
    char UpperChar = toupper(C);
    cout << "Upper case of " << C << " is: " << UpperChar << endl;
}

int main()
{
    PrintUpperCase(ReadCharacter());
    return 0;
}