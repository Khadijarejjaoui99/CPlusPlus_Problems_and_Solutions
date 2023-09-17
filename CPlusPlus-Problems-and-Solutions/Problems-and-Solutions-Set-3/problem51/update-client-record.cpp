#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

const string CLIENTS_FILE_NAME = "clients-list.txt";

struct stClient
{
    string AccountNumber, PINCode, Name, Phone;
    double AccountBalance;
    bool MarkForDelete = false;
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

bool FindCleintByAccountNumber(string AccountNumber, vector<stClient> vClients, stClient &Client)
{
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

string ConvertRecordToDataLine(stClient Client, string Separator = "#//#")
{
    string DataLine = "";

    DataLine += Client.AccountNumber + Separator;
    DataLine += Client.PINCode + Separator;
    DataLine += Client.Name + Separator;
    DataLine += Client.Phone + Separator;
    DataLine += to_string(Client.AccountBalance);

    return DataLine;
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

void SaveClientsDataToFile(string FileName, vector<stClient> vClients)
{
    fstream MyFile;
    string DataLine = "";

    MyFile.open(FileName, ios::out);

    if (MyFile.is_open())
    {
        for (stClient &C : vClients)
        {
            if (!C.MarkForDelete)
            {
                DataLine = ConvertRecordToDataLine(C);
                MyFile << DataLine << endl;
            }
        }

        MyFile.close();
    }
}

stClient ChangeClientRecord(string AccountNumber)
{
    stClient Client;

    Client.AccountNumber = AccountNumber;

    cout << "\nPlease Enter PIN Code: ";
    getline(cin >> ws, Client.PINCode);

    cout << "Please Enter Name: ";
    getline(cin, Client.Name);

    cout << "Please Enter Phone: ";
    getline(cin, Client.Phone);

    cout << "Please Enter Account Balance: ";
    cin >> Client.AccountBalance;

    return Client;
}

void UpdateClientByAccountNumber(vector<stClient> &vClients, string AccountNumber)
{
    stClient Client;
    char Answer = 'n';

    if (FindCleintByAccountNumber(AccountNumber, vClients, Client))
    {
        PrintClientCard(Client);

        cout << "\nAre you sure you want to update this client y/n:\n";
        cin >> Answer;

        if (tolower(Answer) == 'y')
        {
            for (stClient &C : vClients)
            {
                if (C.AccountNumber == AccountNumber)
                {
                    C = ChangeClientRecord(AccountNumber);
                    break;
                }
            }

            SaveClientsDataToFile(CLIENTS_FILE_NAME, vClients);

            cout << "\nClient Updated Successfully\n";
        }
    }
    else
    {
        cout << "\nClient with Account Number " << AccountNumber << " Not Found!\n";
    }
}

int main()
{
    vector<stClient> vClients = LoadClientsRecordsFromFile(CLIENTS_FILE_NAME);

    UpdateClientByAccountNumber(vClients, ReadAccountNumber());

    system("pause>0");

    return 0;
}