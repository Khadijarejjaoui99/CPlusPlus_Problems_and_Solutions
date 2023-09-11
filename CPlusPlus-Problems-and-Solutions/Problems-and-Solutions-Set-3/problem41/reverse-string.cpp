#include <iostream>
#include <string>
#include <vector>
using namespace std;

string ReadString()
{
    string Str;

    cout << "Please enter a string:\n";
    getline(cin, Str);

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
string ReversString(string Str)
{
    vector<string> vString = SplitString(Str, " ");
    string Str1 = "";

    vector<string>::iterator iter = vString.end();

    while (iter != vString.begin())
    {
        --iter;
        Str1 += *iter + " ";
    }

    return Str1.substr(0, Str1.length() - 1);
}

int main()
{

    cout << ReversString(ReadString()) << endl;

    return 0;
}