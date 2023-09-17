#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

const string CLIENTS_FILE_NAME = "clients-list.txt";

struct stClient
{
    string AccountNumber, PINCode, Name, Phone;
    double AccountBalance;
};

string ReadAccountNumber()
{
    string Str;

    cout << "Please enter Account Number:" << endl;
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

stClient ConvertDataLineToRecord(string DataLine, string Separator = "#//#")
{
    vector<string> vString = SplitString(DataLine, Separator);
    stClient Client;

    Client.AccountNumber = vString[0];
    Client.PINCode = vString[1];
    Client.Name = vString[2];
    Client.Phone = vString[3];
    Client.AccountBalance = stod(vString[4]);

    return Client;
}

vector<stClient> LoadClientsRecordsFromFile(string FileName)
{
    fstream MyFile;
    vector<stClient> Clients;

    MyFile.open(FileName, ios::in);

    if (MyFile.is_open())
    {
        string Line = "";
        stClient Client;

        while (getline(MyFile, Line))
        {
            Client = ConvertDataLineToRecord(Line);
            Clients.push_back(Client);
        }

        MyFile.close();
    }

    return Clients;
}

bool FindCleintByAccountNumber(string AccountNumber, stClient &Client)
{
    vector<stClient> vClients = LoadClientsRecordsFromFile(CLIENTS_FILE_NAME);

    for (stClient &Record : vClients)
    {
        if (Record.AccountNumber == AccountNumber)
        {
            Client = Record;
            return true;
        }
    }
    return false;
}

void PrintClientCard(stClient Client)
{
    cout << "\nThe followings are Clients Details:\n";

    cout << "\nAccount Number: " << Client.AccountNumber << endl;
    cout << "PIN Code: " << Client.PINCode << endl;
    cout << "Name: " << Client.Name << endl;
    cout << "Phone: " << Client.Phone << endl;
    cout << "Account Balance: " << Client.AccountBalance << endl;
}

int main()
{

    string AccountNumber = ReadAccountNumber();
    stClient Client;

    if (FindCleintByAccountNumber(AccountNumber, Client))
    {
        PrintClientCard(Client);
    }
    else
    {
        cout << "\nClient with Account Number " << AccountNumber << " Not Found!\n";
    }

    system("pause>0");

    return 0;
}