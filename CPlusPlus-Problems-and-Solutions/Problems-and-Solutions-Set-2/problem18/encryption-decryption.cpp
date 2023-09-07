#include <iostream>
#include <string>
using namespace std;

string ReadText(string Msg)
{
    string Text;

    cout << Msg << endl;
    getline(cin, Text);

    return Text;
}

string GetEncryptedText(string Text, short EncryptionKey)
{
    for (int i = 0; i <= Text.length(); i++)
    {
        Text[i] = char((int)Text[i] + EncryptionKey);
    }
    return Text;
}
string GetDecrytedText(string Text, short EncryptionKey)
{
    for (int i = 0; i <= Text.length(); i++)
    {
        Text[i] = char((int)Text[i] - EncryptionKey);
    }
    return Text;
}
int main()
{
    string Name = ReadText("Please enter your Name:");
    const short EncryptionKey = 2;
    string EncryptedName = GetEncryptedText(Name, EncryptionKey);
    string DecrytedName = GetDecrytedText(EncryptedName, EncryptionKey);

    cout << "Text Before Encryption = " << Name << endl;
    cout << "Text After Encryption = " << EncryptedName << endl;
    cout << "Text After Decryption = " << DecrytedName << endl;
    return 0;
}