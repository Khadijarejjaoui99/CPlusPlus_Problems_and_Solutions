#include <iostream>
#include <vector>
using namespace std;

string JoinString(vector<string> vString, string Delim)
{
    string Str = "";

    for (string &S : vString)
    {
        Str += S + Delim;
    }

    return Str.substr(0, Str.length() - Delim.length());
}

string JoinString(string Array[], int length, string Delim)
{
    string Str = "";

    for (short i = 0; i < length; i++)
    {
        Str += Array[i] + Delim;
    }
    return Str.substr(0, Str.length() - Delim.length());
}

int main()
{
    vector<string> vString = {"Hello,", "I", "am", "learning", "about", "join", "function", "and", "function", "overloading"};
    string Array[] = {"Hello,", "I", "am", "learning", "about", "join", "function", "and", "function", "overloading"};

    cout << "Vector After Join:\n";
    cout << JoinString(vString, " ") << endl;

    cout << "\nArray After Join:\n";
    cout << JoinString(Array, 10, " ") << endl;

    return 0;
}