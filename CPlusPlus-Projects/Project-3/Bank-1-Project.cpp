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

enum enMainMenuOpetions
{
    eListClients = 1,
    eAddClients = 2,
    eDeleteClient = 3,
    eUpdateClient = 4,
    eFindClient = 5,
    eExit = 6
};

void ShowMainMenuScreen();

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

vector<stClient> LoadClientDataFromFile(string FileName)
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
            Client = ConvertDataLineToRecord(Line);
            vClients.push_back(Client);
        }

        MyFile.close();
    }

    return vClients;
}

void PrintClientRecord(stClient Client)
{
    cout << "| " << left << setw(15) << Client.AccountNumber;
    cout << "| " << left << setw(10) << Client.PINCode;
    cout << "| " << left << setw(35) << Client.Name;
    cout << "| " << left << setw(15) << Client.Phone;
    cout << "| " << left << setw(12) << Client.AccountBalance;
}

void ShowAllClients(vector<stClient> vClients)
{
    cout << "\n\t\t\t\tClient List (" << vClients.size() << ") client(s)." << endl;
    cout << "________________________________________________________________________________________________\n\n";
    cout << "| " << left << setw(15) << "Accout Number";
    cout << "| " << left << setw(10) << "PIN Code";
    cout << "| " << left << setw(35) << "Client Name";
    cout << "| " << left << setw(15) << "Phone";
    cout << "| " << left << setw(12) << "Balance";
    cout << "\n________________________________________________________________________________________________\n\n";

    if (vClients.size() == 0)
        cout << "\t\t\t\t No Client available in the system!";
    else
    {
        for (stClient &Client : vClients)
        {
            PrintClientRecord(Client);
            cout << endl;
        }
    }
    cout << "\n\n_________________________________________________________________________________________________\n";
}

void ShowAllClientsScreen()
{
    system("cls");
    vector<stClient> vClients = LoadClientDataFromFile(CLIENTS_FILE_NAME);

    ShowAllClients(vClients);
}

bool IsAccountNumberExists(string AccountNumber, string FileName)
{
    fstream MyFile;

    MyFile.open(FileName, ios::in);

    if (MyFile.is_open())
    {
        stClient Client;
        string Line;

        while (getline(MyFile, Line))
        {
            Client = ConvertDataLineToRecord(Line);

            if (Client.AccountNumber == AccountNumber)
            {
                MyFile.close();

                return true;
            }
        }
        MyFile.close();
    }

    return false;
}

stClient ReadClientRecord()
{
    stClient Client;

    cout << "Please Enter Account Number: ";
    getline(cin >> ws, Client.AccountNumber);

    while (IsAccountNumberExists(Client.AccountNumber, CLIENTS_FILE_NAME))
    {
        cout << "Account Number (" << Client.AccountNumber << ") Exist. Please enter another account number: ";
        getline(cin, Client.AccountNumber);
    }

    cout << "Please Enter PIN Code: ";
    getline(cin, Client.PINCode);
    cout << "Please Enter Name: ";
    getline(cin, Client.Name);
    cout << "Please Enter Phone: ";
    getline(cin, Client.Phone);
    cout << "Please Enter Account Balance: ";
    cin >> Client.AccountBalance;

    return Client;
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

void AddDataLineToFile(string FileName, string DataLine)
{
    fstream MyFile;

    MyFile.open(FileName, ios::out | ios::app);

    if (MyFile.is_open())
    {
        MyFile << DataLine << endl;
        MyFile.close();
    }
}

void AddNewClient()
{
    stClient Client = ReadClientRecord();

    AddDataLineToFile(CLIENTS_FILE_NAME, ConvertRecordToDataLine(Client));
}

void AddNewClients()
{
    char AddMore = 'y';

    do
    {

        cout << "\nAdding New Client:\n\n";

        AddNewClient();

        cout << "\nClient Added Successfully, do you want to add more clients: ";
        cin >> AddMore;

    } while (tolower(AddMore) == 'y');
}

void ShowAddClientsScreen()
{
    system("cls");
    cout << "==================================\n";
    cout << "\tAdd New Clients Screen\n";
    cout << "==================================\n";

    AddNewClients();
}

string ReadAccountNumber()
{
    string AccountNumber;

    cout << "Please enter Account Number: ";
    getline(cin >> ws, AccountNumber);

    return AccountNumber;
}

void PrintClientCard(stClient Client)
{
    cout << "\nThe followings are Client Details:\n";
    cout << "----------------------------------------\n";
    cout << "\nAccount Number: " << Client.AccountNumber << endl;
    cout << "PIN Code: " << Client.PINCode << endl;
    cout << "Name: " << Client.Name << endl;
    cout << "Phone: " << Client.Phone << endl;
    cout << "Account Balance: " << Client.AccountBalance << endl;
    cout << "----------------------------------------\n";
}

void MarkClientForDelete(vector<stClient> &vClients, string AccountNumber)
{
    for (stClient &C : vClients)
    {
        if (C.AccountNumber == AccountNumber)
        {
            C.MarkForDelete = true;
            break;
        }
    }
}

void SavaClientsToFile(vector<stClient> vClients, string FileName)
{
    fstream MyFile;

    MyFile.open(FileName, ios::out);

    if (MyFile.is_open())
    {
        for (stClient &C : vClients)
        {
            if (!C.MarkForDelete)
                MyFile << ConvertRecordToDataLine(C) << endl;
        }
    }
}

bool FindClientByAccountNumber(string AccountNumber, stClient &Client, vector<stClient> vClients)
{
    for (stClient &C : vClients)
    {
        if (C.AccountNumber == AccountNumber)
        {
            Client = C;
            return true;
        }
    }

    return false;
}

void DeleteClientByAccountNumber(vector<stClient> &vClients, string AccountNumber)
{
    stClient Client;
    char Answer = 'n';

    if (FindClientByAccountNumber(AccountNumber, Client, vClients))
    {
        PrintClientCard(Client);

        cout << "\nAre you sure you want to delete this client? y/n? ";
        cin >> Answer;

        if (tolower(Answer) == 'y')
        {
            MarkClientForDelete(vClients, AccountNumber);
            SavaClientsToFile(vClients, CLIENTS_FILE_NAME);
            vClients = LoadClientDataFromFile(CLIENTS_FILE_NAME);

            cout << "\nClient Deleted Successfully\n";
        }
    }
    else
    {
        cout << "\nClient with Account Number (" << AccountNumber << ") Not Found!\n";
    }
}

void ShowDeleteClientScreen()
{
    system("cls");
    cout << "==================================\n";
    cout << "\tDelete Client Screen\n";
    cout << "==================================\n";

    vector<stClient> vClients = LoadClientDataFromFile(CLIENTS_FILE_NAME);
    string AccountNumber = ReadAccountNumber();
    DeleteClientByAccountNumber(vClients, AccountNumber);
}

stClient UpdateClientRecord(string AccountNumber)
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

    if (FindClientByAccountNumber(AccountNumber, Client, vClients))
    {
        PrintClientCard(Client);

        cout << "\nAre you sure you want to update this client? y/n? ";
        cin >> Answer;

        if (tolower(Answer) == 'y')
        {
            for (stClient &C : vClients)
            {
                if (C.AccountNumber == AccountNumber)
                {
                    C = UpdateClientRecord(AccountNumber);
                    break;
                }
            }

            SavaClientsToFile(vClients, CLIENTS_FILE_NAME);

            cout << "\nClient Updated Successfully\n";
        }
    }
    else
    {
        cout << "\nClient with Account Number (" << AccountNumber << ") Not Found!\n";
    }
}

void ShowUpdateClientScreen()
{
    system("cls");
    cout << "==================================\n";
    cout << "\tUpdate Client Screen\n";
    cout << "==================================\n";

    vector<stClient> vClients = LoadClientDataFromFile(CLIENTS_FILE_NAME);
    string AccountNumber = ReadAccountNumber();
    UpdateClientByAccountNumber(vClients, AccountNumber);
}

void GoBackToMainMenu()
{
    cout << "\n\nPlease press any key to go back to main menu ";
    system("pause>0");
    ShowMainMenuScreen();
}

short ReadMainMenuOpetion()
{
    short Option;

    do
    {
        cout << "Choose what you want to do? [1 to 6]? ";
        cin >> Option;

    } while (Option < 1 || Option > 6);

    return Option;
}

void PerformMainMenuOption(enMainMenuOpetions MainMenuOption)
{
    switch (MainMenuOption)
    {
    case enMainMenuOpetions::eListClients:
        ShowAllClientsScreen();
        GoBackToMainMenu();
        break;
    case enMainMenuOpetions::eAddClients:
        ShowAddClientsScreen();
        GoBackToMainMenu();
        break;
    case enMainMenuOpetions::eDeleteClient:
        ShowDeleteClientScreen();
        GoBackToMainMenu();
        break;
    case enMainMenuOpetions::eUpdateClient:
        ShowUpdateClientScreen();
        GoBackToMainMenu();
        break;
    case enMainMenuOpetions::eFindClient:
        // ShowFindClientScreen();
        GoBackToMainMenu();
        break;
    case enMainMenuOpetions::eExit:
        // ShowExitScreen();
        break;
    }
}

void ShowMainMenuScreen()
{
    system("cls");
    cout << "=================================================\n";
    cout << "\t\tMain Menu Sreen\n";
    cout << "=================================================\n";

    cout << "\t[1] Show Clients List.\n";
    cout << "\t[2] Add New Client.\n";
    cout << "\t[3] Delete Client.\n";
    cout << "\t[4] Update Client Info.\n";
    cout << "\t[5] Find Client.\n";
    cout << "\t[6] Exit.\n";
    cout << "=================================================\n";
    PerformMainMenuOption((enMainMenuOpetions)ReadMainMenuOpetion());
}

int main()
{
    ShowMainMenuScreen();
    system("pause>0");
    return 0;
}