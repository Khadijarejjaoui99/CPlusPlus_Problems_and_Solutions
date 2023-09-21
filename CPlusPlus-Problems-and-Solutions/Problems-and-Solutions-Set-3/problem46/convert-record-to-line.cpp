#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct stClient
{
    string AccountNumber, PINCode, Name, Phone;
    double AccountBalance;
};

stClient ReadClientRecord()
{
    stClient Client;
    cout << "Please Enter The Account Number:\n";
    cin >> Client.AccountNumber;
    cout << "Please Enter The PIN Code:\n";
    cin >> Client.PINCode;
    cout << "Please Enter The Name:\n";
    cin.ignore(1, '\n');
    getline(cin, Client.Name);
    cout << "Please Enter The Phone Number:\n";
    cin >> Client.Phone;
    cout << "Please Enter The Account Balance:\n";
    cin >> Client.AccountBalance;

    return Client;
}

string ConvertRecordToDataLine(stClient Client, string Separator = "#//#")
{
    string Str = "";

    Str = Client.AccountNumber + Separator;
    Str += Client.PINCode + Separator;
    Str += Client.Name + Separator;
    Str += Client.Phone + Separator;
    Str += to_string(Client.AccountBalance);

    return Str;
}

int main()
{
    stClient Client = ReadClientRecord();

    string Line = ConvertRecordToDataLine(Client);

    cout << "Client Record Line: " << Line << endl;

    return 0;
}