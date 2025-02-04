#include <iostream>
#include <cctype>
using namespace std;

enum enWhatToCount
{
    SmallLetters,
    CapitaLetters,
    All
};

string ReadString(string Msg)
{
    string Str;
    cout << Msg << endl;
    getline(cin, Str);
    return Str;
}

short LettersCount(string Str, enWhatToCount WhatToCount = enWhatToCount::All)
{

    if (WhatToCount == enWhatToCount::All)
        return Str.length();

    short Counter = 0;

    for (short i = 0; i < Str.length(); i++)
    {
        if (WhatToCount == enWhatToCount::CapitaLetters && isupper(Str[i]))
            Counter++;
        if (WhatToCount == enWhatToCount::SmallLetters && islower(Str[i]))
            Counter++;
    }

    return Counter;
}

int main()
{
    string Str = ReadString("Please enter your String:");

    cout << "String length = " << LettersCount(Str) << endl;
    cout << "Capital Letters Count = " << LettersCount(Str, enWhatToCount::CapitaLetters) << endl;
    cout << "Small Letters Count = " << LettersCount(Str, enWhatToCount::SmallLetters) << endl;

    system("pause>0");
    return 0;
}