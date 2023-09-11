#include <iostream>
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

void PrintVector(vector<string> vStringTokens)
{
    for (string &S : vStringTokens)
        cout << S << endl;
}

int main()
{

    string Str = ReadString();

    vector<string> vStringTokens;

    vStringTokens = SplitString(Str, " ");

    cout << "Tokens = " << vStringTokens.size() << endl;

    PrintVector(vStringTokens);

    system("pause>0");

    return 0;
}