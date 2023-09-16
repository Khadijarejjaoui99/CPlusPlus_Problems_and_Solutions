#include <iostream>
#include <string>
#include <fstream>
using namespace std;

const string CLIENTS_FILE_NAME = "clients-list.txt";

struct stClient
{
    string AccountNumber, PINCode, Name, Phone;
    double AccountBalance;
};

stClient ReadClientRecord()
{
    stClient Client;

    cout << "Please Enter Account Number: ";
    getline(cin >> ws, Client.AccountNumber);
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

string ConvertRecordToDataLine(stClient Client, string Separator = "#\\#")
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
    stClient Client;
    Client = ReadClientRecord();
    AddDataLineToFile(CLIENTS_FILE_NAME, ConvertRecordToDataLine(Client));
}

void AddClientsToFile()
{
    char AddMore = 'Y';

    do
    {
        cout << "\nAdding New Client:\n\n";
        AddNewClient();

        cout << "\nClient Added Successfully, do you want to add more clients: ";
        cin >> AddMore;

        system("cls");

    } while (toupper(AddMore) == 'Y');
}

int main()
{
    AddClientsToFile();
    return 0;
}