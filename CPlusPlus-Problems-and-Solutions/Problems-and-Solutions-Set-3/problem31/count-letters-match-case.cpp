#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadString()
{
    string Str;

    cout << "Please enter a string:\n";
    getline(cin, Str);

    return Str;
}

char ReadChar()
{
    char C;

    cout << "Please enter a character:\n";
    cin >> C;

    return C;
}

char InvertCharCase(char C)
{
    return isupper(C) ? tolower(C) : toupper(C);
}

int GetCharCount(string Str, char C, bool MatchCase = true)
{
    int Counter = 0;

    for (int i = 0; i < Str.length(); i++)
    {
        if (MatchCase)
        {
            if (Str[i] == C)
                Counter++;
        }
        else
        {
            if (tolower(Str[i]) == tolower(C))
                Counter++;
        }
    }
    return Counter;
}

int main()
{
    string Str = ReadString();
    char CharToLookFor = ReadChar();

    cout << "Your String is " << Str << endl;

    cout << "Character " << CharToLookFor << " Count = " << GetCharCount(Str, CharToLookFor) << endl;
    cout << "Character " << CharToLookFor << " Or " << InvertCharCase(CharToLookFor) << " Count = " << GetCharCount(Str, CharToLookFor, false) << endl;

    system("pause>0");

    return 0;
}