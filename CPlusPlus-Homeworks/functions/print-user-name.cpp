#include <iostream>
#include <string>
using namespace std;

void DisplayName()
{
    string Name;

    cout << "Please enter your name:\n";
    getline(cin, Name);

    cout << "Your name is: " << Name << endl;
}
int main()
{
    DisplayName();

    return 0;
}