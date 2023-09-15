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

string RemovePunctuations(string Str)
{
    string Str2 = "";

    for (short i = 0; i < Str.length(); i++)
    {
        if (!ispunct(Str[i]))
        {
            Str2 += Str[i];
        }
    }

    return Str2;
}

int main()
{
    string Str = ReadString();

    cout << "Original String:\n";
    cout << Str << endl;

    cout << "Punctuations Removed:\n";
    cout << RemovePunctuations(Str) << endl;
    return 0;
}