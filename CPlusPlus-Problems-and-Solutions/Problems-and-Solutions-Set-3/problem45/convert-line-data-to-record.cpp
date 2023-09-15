#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct stRecord
{
    string AccountNumber, PINCode, Name, Phone;
    double AccountBalance;
};

string ReadString()
{
    string Str;

    cout << "Please enter a string:\n";
    getline(cin, Str);

    return Str;
}

vector<string> SplitString(string Str, string Delim)
{
    int pos = 0;
    string sWord = "";
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

stRecord ConvertLineToRecord(string Str)
{
    vector<string> vString = SplitString(Str, "#//#");
    stRecord Record;

    Record.AccountNumber = vString[0];
    Record.PINCode = vString[1];
    Record.Name = vString[2];
    Record.Phone = vString[3];
    Record.AccountBalance = stod(vString[4]);

    return Record;
}

void PrintRecord(stRecord Record)
{
    cout << "\nThe following is the extracted record:\n\n";
    cout << "Account Number: " << Record.AccountNumber << endl;
    cout << "PIN Code: " << Record.PINCode << endl;
    cout << "Name: " << Record.Name << endl;
    cout << "Phone: " << Record.Phone << endl;
    cout << "Account Balance: " << Record.AccountBalance << endl;
}

int main()
{
    string sLine = ReadString();
    cout << "\nLine Record is:\n";
    cout << sLine << endl;

    stRecord Record = ConvertLineToRecord(sLine);

    PrintRecord(Record);

    return 0;
}