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

int CountWordsInString(string Str)
{
    string delim = " ", sWord = "";

    int pos = 0, Counter = 0;

    while ((pos = Str.find(delim)) != string::npos)
    {
        sWord = Str.substr(0, pos);

        if (sWord != "")
            Counter++;

        Str.erase(0, pos + delim.length());
    }

    if (Str != "")
        Counter++;

    return Counter;
}

int main()
{

    string Str = ReadString();

    cout << "The number of words in string is: " << CountWordsInString(Str) << endl;

    system("pause>0");

    return 0;
}