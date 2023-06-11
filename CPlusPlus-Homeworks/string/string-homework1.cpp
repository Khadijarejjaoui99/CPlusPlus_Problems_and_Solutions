#include <iostream>
#include <string>
using namespace std;

int main()
{
    string string1, string2, string3;

    cout << "Please enter string1:\n";
    getline(cin, string1);
    cout << "Please enter string2:\n";
    cin >> string2;
    cout << "Please enter string3:\n";
    cin >> string3;

    cout << "****************************\n";
    cout << "The length of string1 is: " << string1.length() << "\n";
    cout << "characters at position 0, 2,4,8 are: " << string1[0] << " " << string1[2] << " " << string1[4] << " " << string1[8] << "\n";
    cout << "concatenating string1 and string2: " << string2 + string3 << "\n";
    cout << string2 << " + " << string3 << " = " << stoi(string2) * stoi(string3) << "\n";
}