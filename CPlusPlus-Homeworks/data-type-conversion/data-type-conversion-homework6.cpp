#include <iostream>
using namespace std;

int main()
{
    char UpperChar, LowerChar;

    cout << "Please enter an uppercase character: \n";
    cin >> UpperChar;

    LowerChar = tolower(UpperChar);

    cout << UpperChar << " lowercase equivalent is: " << LowerChar << endl;
}