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

short CapitalLettersCount(string Str)
{
    short Counter = 0;

    for (short i = 0; i < Str.length(); i++)
    {
        if (isupper(Str[i]))
            Counter++;
    }

    return Counter;
}

short SmallLettersCount(string Str)
{
    short Counter = 0;

    for (short i = 0; i < Str.length(); i++)
    {
        if (islower(Str[i]))
            Counter++;
    }

    return Counter;
}

int main()
{
    string Str = ReadString("Please enter your String:");

    cout << "String length = " << Str.length() << endl;
    cout << "Capital Letters Count = " << CapitalLettersCount(Str) << endl;
    cout << "Small Letters Count = " << SmallLettersCount(Str) << endl;

    system("pause>0");
    return 0;
}