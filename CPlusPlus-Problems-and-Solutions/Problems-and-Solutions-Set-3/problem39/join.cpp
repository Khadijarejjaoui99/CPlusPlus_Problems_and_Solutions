#include <iostream>
#include <vector>
using namespace std;

string Join(vector<string> vString, string Delim)
{
    string Str = "";

    for (string &S : vString)
    {
        Str += S + Delim;
    }

    return Str.substr(0, Str.length() - Delim.length());
}

int main()
{
    vector<string> vString = {"Hello,", "I", "am", "learning", "about", "join", "function"};

    string Str = Join(vString, " ");

    cout << "Vector After Join:\n";
    cout << Str << endl;
    return 0;
}