#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct stDate
{
    short Day, Month, Year;
};

string ReadStringDate(string Msg)
{
    string DateStr;

    cout << Msg;
    getline(cin >> ws, DateStr);

    return DateStr;
}

vector<string> SplitString(string Str, string Delim)
{
    int pos;
    string sWord;
    vector<string> vString;

    while ((pos = Str.find(Delim)) != string::npos)
    {
        sWord = Str.substr(0, pos);

        if (sWord != "")
            vString.push_back(sWord);

        Str.erase(0, pos + Delim.length());
    }

    if (Str != "")
        vString.push_back(Str);

    return vString;
}

stDate StringToDate(string DateStr)
{
    vector<string> vDate = SplitString(DateStr, "/");
    stDate Date;

    Date.Day = stoi(vDate[0]);
    Date.Month = stoi(vDate[1]);
    Date.Year = stoi(vDate[2]);

    return Date;
}

string DateToString(stDate Date, string Separator = "/")
{
    string DateStr = "";

    DateStr += to_string(Date.Day) + Separator;
    DateStr += to_string(Date.Month) + Separator;
    DateStr += to_string(Date.Year);

    return DateStr;
}

int main()
{
    string StringDate = ReadStringDate("\nPlease enter date dd/mm/yyyy: ");

    stDate Date = StringToDate(StringDate);

    cout << "\n\nDay: " << Date.Day << endl;
    cout << "Month: " << Date.Month << endl;
    cout << "Year: " << Date.Year << endl;

    StringDate = DateToString(Date);

    cout << "\nYou Entered: " << StringDate << endl;

    system("pause>0");
    return 0;
}