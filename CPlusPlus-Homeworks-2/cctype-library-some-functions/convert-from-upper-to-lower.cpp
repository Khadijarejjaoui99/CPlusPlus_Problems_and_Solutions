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

void PrintLowerCase(char C)
{
    char LowerChar = tolower(C);
    cout << "Lower case of " << C << " is: " << LowerChar << endl;
}

int main()
{
    PrintLowerCase(ReadCharacter());
    return 0;
}