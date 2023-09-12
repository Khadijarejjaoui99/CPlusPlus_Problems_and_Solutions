#include <iostream>
#include <string>
using namespace std;

string ReplaceWordsInStringUsingBuiltInFunc(string Str, string StringToReplace, string ReplaceTo)
{
    short pos = 0;

    while ((pos = Str.find(StringToReplace)) != string::npos)
    {
        Str = Str.replace(pos, StringToReplace.length(), ReplaceTo);
    }

    return Str;
}

int main()
{

    string Str = "Welcome to Jordan, Jordan is a nice place";

    Str = ReplaceWordsInStringUsingBuiltInFunc(Str, "Jordan", "Morocco");

    cout << Str << endl;

    return 0;
}