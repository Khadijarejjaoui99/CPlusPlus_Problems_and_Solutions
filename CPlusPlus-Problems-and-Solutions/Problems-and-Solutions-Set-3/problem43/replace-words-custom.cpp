#include <iostream>
#include <vector>
using namespace std;

string LowerString(string Str)
{
    for (int i = 0; i < Str.length(); i++)
    {
        Str[i] = tolower(Str[i]);
    }

    return Str;
}

vector<string> SplitString(string Str, string delim)
{

    int pos = 0;
    string sWord;
    vector<string> vStringTokens;

    while ((pos = Str.find(delim)) != string::npos)
    {
        sWord = Str.substr(0, pos);

        if (sWord != "")
            vStringTokens.push_back(sWord);

        Str.erase(0, pos + delim.length());
    }

    if (Str != "")
        vStringTokens.push_back(Str);

    return vStringTokens;
}

string JoinString(vector<string> vString, string Delim)
{
    string Str = "";

    for (string &S : vString)
    {
        Str += S + Delim;
    }

    return Str.substr(0, Str.length() - Delim.length());
}

string ReplaceWordsInString(string Str, string StringToReplace, string ReplaceTo, bool Match = true)
{
    vector<string> vString = SplitString(Str, " ");

    for (string &S : vString)
    {
        if (Match)
        {
            if (S.substr(0, StringToReplace.length()) == StringToReplace)
            {
                S = ReplaceTo + S.substr(StringToReplace.length());
            }
        }
        else
        {
            if (LowerString(S.substr(0, StringToReplace.length())) == LowerString(StringToReplace))
            {
                S = ReplaceTo + S.substr(StringToReplace.length());
            }
        }
    }

    return JoinString(vString, " ");
}

int main()
{

    string Str = "Welcome to Jordan, Jordan is a nice place";

    Str = ReplaceWordsInString(Str, "jordan", "Morocco");
    cout << Str << endl;

    Str = ReplaceWordsInString(Str, "Jordan", "Morocco");
    cout << Str << endl;

    Str = ReplaceWordsInString(Str, "jordan", "Morocco", false);

    cout << Str << endl;

    return 0;
}