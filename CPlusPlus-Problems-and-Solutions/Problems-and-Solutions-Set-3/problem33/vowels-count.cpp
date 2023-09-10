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

short CountVowels(string Str)
{
    short Counter = 0;

    for (short i = 0; i < Str.length(); i++)
    {
        if (IsVowel(Str[i]))
            Counter++;
    }

    return Counter;
}

int main()
{

    string Str = ReadString();

    cout << "Number of Vowels is: " << CountVowels(Str) << endl;

    system("pause>0");

    return 0;
}