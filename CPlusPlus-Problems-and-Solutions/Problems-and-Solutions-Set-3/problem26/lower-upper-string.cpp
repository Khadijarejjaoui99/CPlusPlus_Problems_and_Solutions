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

string UpperString(string Str)
{
    for (int i = 0; i < Str.length(); i++)
    {
        Str[i] = toupper(Str[i]);
    }

    return Str;
}

string LowerString(string Str)
{
    for (int i = 0; i < Str.length(); i++)
    {
        Str[i] = tolower(Str[i]);
    }

    return Str;
}

int main()
{
    string Str = ReadString("Please enter your String:");

    cout << "String After Upper:\n";
    cout << UpperString(Str) << endl;

    cout << "String After Lower:\n";
    cout << LowerString(Str) << endl;
    system("pause>0");
    return 0;
}