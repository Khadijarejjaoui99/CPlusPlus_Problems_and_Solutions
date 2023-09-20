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

stClient ConvertDataLineToRecord(string DataLine, string Separator = "#//#")
{
    stClient Client;
    vector<string> vString = SplitString(DataLine, Separator);

    Client.AccountNumber = vString[0];
    Client.PINCode = vString[1];
    Client.Name = vString[2];
    Client.Phone = vString[3];
    Client.AccountBalance = stod(vString[4]);

    return Client;
}

vector<stClient> LoadClientDataFromFile(string FileName)
{
    vector<stClient> vClients;

    fstream MyFile;

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
    cout << "| " << left << setw(15) << "Account Number";
    cout << "| " << left << setw(10) << "PIN Code";
    cout << "| " << left << setw(40) << "Name";
    cout << "| " << left << setw(12) << "Phone";
    cout << "| " << left << setw(12) << "Balance";
    cout << "\n________________________________________________________________________________________________\n\n";

    if (vClients.size() == 0)
        cout << "\t\t\t\t No Client available in the system!";
    else
    {
        for (stClient &C : vClients)
        {
            PrintClientRecord(C);
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
        // ShowAddClientsScreen();
        GoBackToMainMenu();
        break;
    case enMainMenuOpetions::eDeleteClient:
        // ShowDeleteClientScreen();
        GoBackToMainMenu();
        break;
    case enMainMenuOpetions::eUpdateClient:
        // ShowUpdateClientScreen();
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