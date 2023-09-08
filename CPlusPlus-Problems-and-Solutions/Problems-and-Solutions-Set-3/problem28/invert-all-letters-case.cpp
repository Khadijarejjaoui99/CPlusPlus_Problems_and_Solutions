#include <iostream>
#include <string>
using namespace std;

string ReadString(string Msg)
{
    string Str;
    cout << Msg << endl;
    getline(cin, Str);
    return Str;
}

char InvertCharacterCase(char C)
{
    return isupper(C) ? tolower(C) : toupper(C);
}

string InvertAllLettersCase(string Str)
{
    for (int i = 0; i < Str.length(); i++)
    {
        Str[i] = InvertCharacterCase(Str[i]);
    }

    return Str;
}

int main()
{
    string Str = ReadString("Please enter your String:");

    Str = InvertAllLettersCase(Str);

    cout << Str << endl;

    system("pause>0");
    return 0;
}