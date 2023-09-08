#include <iostream>
#include <cctype>
using namespace std;

string ReadString(string Msg)
{
    string Str;
    cout << Msg << endl;
    getline(cin, Str);
    return Str;
}

char ReadCharacter(string Msg)
{
    char C;
    cout << Msg << endl;
    cin >> C;
    return C;
}

short GetLetterCount(string Str, char LetterToCount)
{
    short Counter = 0;

    for (short i = 0; i < Str.length(); i++)
    {
        if (Str[i] == LetterToCount)
            Counter++;
    }

    return Counter;
}

int main()
{
    string Str = ReadString("Please enter your String:");
    char LetterToCount = ReadCharacter("Please enter character to count:");

    cout << "Letter \'" << LetterToCount << "\' Count = " << GetLetterCount(Str, LetterToCount) << endl;

    system("pause>0");

    return 0;
}