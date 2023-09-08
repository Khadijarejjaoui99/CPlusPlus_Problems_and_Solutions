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

string LowerFirstLetterOfEachWord(string Str)
{
    bool FirstLetter = true;

    for (int i = 0; i < Str.length(); i++)
    {
        if (Str[i] != ' ' && FirstLetter)
            Str[i] = tolower(Str[i]);

        FirstLetter = (Str[i] == ' ' ? true : false);
    }

    return Str;
}

int main()
{
    string Str = ReadString("Please enter your String:");

    Str = LowerFirstLetterOfEachWord(Str);

    cout << Str << endl;

    system("pause>0");
    return 0;
}