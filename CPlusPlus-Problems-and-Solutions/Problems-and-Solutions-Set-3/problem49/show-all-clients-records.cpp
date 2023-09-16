#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

const string CLIENTS_FILE_NAME = "file.txt";

struct stClient
{
    string AccountNumber, PINCode, Name, Phone;
    double AccountBalance;
};

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

vector<stClient> LoadRecordsFromFileToVector(string FileName)
{
    fstream MyFile;
    vector<stClient> vClients;

    MyFile.open(FileName, ios::in);

    if (MyFile.is_open())
    {
        string Line = "";
        stClient Client;

        while (getline(MyFile, Line))
        {
            Client = ConvertLineToRecord(Line);
            vClients.push_back(Client);
        }

        MyFile.close();
    }

    return vClients;
}

int main()
{
    vector<stClient> vClients = LoadRecordsFromFileToVector(CLIENTS_FILE_NAME);
    for (stClient &Client : vClients)
    {
        cout << "\nRecord:\n";
        cout << Client.AccountNumber << endl;
        cout << Client.PINCode << endl;
        cout << Client.Name << endl;
        cout << Client.Phone << endl;
        cout << Client.AccountBalance << endl;
    }
    // ShowAllClients(vClients);
    return 0;
}