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

void PrintFirstLetterOfEachWord(string Str)
{
    bool FirstLetter = true;

    for (int i = 0; i < Str.length(); i++)
    {
        if (Str[i] != ' ' && FirstLetter)
            cout << Str[i] << endl;

        FirstLetter = (Str[i] == ' ' ? true : false);
    }
}

int main()
{
    PrintFirstLetterOfEachWord(ReadString("Please enter your String:"));
    system("pause>0");
    return 0;
}