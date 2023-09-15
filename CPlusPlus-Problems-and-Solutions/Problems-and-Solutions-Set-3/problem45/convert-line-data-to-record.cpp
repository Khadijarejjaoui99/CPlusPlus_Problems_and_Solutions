#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct stClient
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

stClient ConvertLineToRecord(string Str, string Separator = "#//#")
{
    vector<string> vString = SplitString(Str, Separator);
    stClient Client;

    Client.AccountNumber = vString[0];
    Client.PINCode = vString[1];
    Client.Name = vString[2];
    Client.Phone = vString[3];
    Client.AccountBalance = stod(vString[4]);

    return Client;
}

void PrintRecord(stClient Client)
{
    cout << "\nThe following is the extracted record:\n\n";
    cout << "Account Number: " << Client.AccountNumber << endl;
    cout << "PIN Code: " << Client.PINCode << endl;
    cout << "Name: " << Client.Name << endl;
    cout << "Phone: " << Client.Phone << endl;
    cout << "Account Balance: " << Client.AccountBalance << endl;
}

int main()
{
    string sLine = ReadString();
    cout << "\nLine:\n";
    cout << sLine << endl;

    stClient Client = ConvertLineToRecord(sLine);

    PrintRecord(Client);

    return 0;
}