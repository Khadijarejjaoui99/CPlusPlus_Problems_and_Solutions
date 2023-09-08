#include <iostream>
#include <string>
using namespace std;

char ReadCharacter(string Msg)
{
    char C;
    cout << Msg << endl;
    cin >> C;
    return C;
}

char InvertCharacterCase(char C)
{
    return isupper(C) ? tolower(C) : toupper(C);
}

int main()
{
    char C = ReadCharacter("Please enter your character:");

    C = InvertCharacterCase(C);

    cout << "Character after inverting its Case: " << C << endl;

    system("pause>0");
    return 0;
}