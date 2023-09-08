#include <iostream>
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

    C = (C == tolower(C) ? toupper(C) : tolower(C));

    return C;
}

int main()
{
    char C = ReadCharacter("Please enter your character:");

    C = InvertCharacterCase(C);

    cout << C << endl;

    system("pause>0");
    return 0;
}