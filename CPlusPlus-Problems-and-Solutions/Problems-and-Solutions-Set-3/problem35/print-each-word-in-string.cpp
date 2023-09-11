#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadString()
{
    string Str;

    cout << "Please enter a string:\n";
    getline(cin, Str);

    return Str;
}

void PrintEachWordInString(string Str)
{
    cout << "\nString Words are:\n";

    string delim = " ";
    string sWord;
    int pos = 0;

    while ((pos = Str.find(delim)) != string::npos)
    {
        sWord = Str.substr(0, pos);

        if (sWord != "")
            cout << sWord << endl;

        Str.erase(0, pos + delim.length());
    }

    if (Str != "")
        cout << Str << endl;
}

int main()
{

    PrintEachWordInString(ReadString());

    system("pause>0");

    return 0;
}