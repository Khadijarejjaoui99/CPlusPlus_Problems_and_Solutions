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
    eShowList = 1,
    eAddClients = 2,
    eDeleteClient = 3,
    eUpdateClient = 4,
    eFindClient = 5,
    eExit = 6
};

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
    case enMainMenuOpetions::eShowList:
        ShowClientsListScreen();
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
        ShowFindClientScreen();
        GoBackToMainMenu();
        break;
    case enMainMenuOpetions::eExit:
        ShowExitScreen();
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