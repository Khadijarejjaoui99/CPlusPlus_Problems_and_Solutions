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

bool IsVowel(char Ch)
{
    Ch = tolower(Ch);

    return ((Ch == 'a') || (Ch == 'e') || (Ch == 'i') || (Ch == 'o') || (Ch == 'u'));
}

void PrintAllVowelsInString(string Str)
{
    cout << "Vowels in string are: ";

    for (short i = 0; i < Str.length(); i++)
    {
        if (IsVowel(Str[i]))
            cout << Str[i] << "    ";
    }

    cout << endl;
}

int main()
{

    string Str = ReadString();

    PrintAllVowelsInString(Str);

    system("pause>0");

    return 0;
}