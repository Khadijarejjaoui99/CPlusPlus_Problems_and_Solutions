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

string ReplaceWordsInString(string Str, string StringToReplace, string ReplaceTo)
{
    short pos = 0;

    while ((pos = Str.find(StringToReplace)) != string::npos)
    {
        Str = Str.replace(pos, StringToReplace.length(), ReplaceTo);
    }

    return Str;
}

string FormatDate(stDate Date, string DateFormat = "dd/mm/yyyy")
{
    string FormatDateString = "";

    FormatDateString = ReplaceWordsInString(DateFormat, "dd", to_string(Date.Day));
    FormatDateString = ReplaceWordsInString(FormatDateString, "mm", to_string(Date.Month));
    FormatDateString = ReplaceWordsInString(FormatDateString, "yyyy", to_string(Date.Year));

    return FormatDateString;
}

int main()
{
    string StringDate = ReadStringDate("\nPlease enter date dd/mm/yyyy: ");

    stDate Date = StringToDate(StringDate);

    cout << "\n"
         << FormatDate(Date) << endl;
    cout << "\n"
         << FormatDate(Date, "yyyy/dd/mm") << endl;
    cout << "\n"
         << FormatDate(Date, "mm/dd/yyyy") << endl;
    cout << "\n"
         << FormatDate(Date, "mm-dd-yyyy") << endl;
    cout << "\n"
         << FormatDate(Date, "dd-mm-yyyy") << endl;
    cout << "\n"
         << FormatDate(Date, "Day:dd, Month:mm, Year:yyyy") << endl;

    system("pause>0");
    return 0;
}