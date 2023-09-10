#include <iostream>
using namespace std;

char ReadChar()
{
    char C;

    cout << "Please enter a character:\n";
    cin >> C;

    return C;
}

bool IsVowel(char Ch)
{
    Ch = tolower(Ch);

    return ((Ch == 'a') || (Ch == 'e') || (Ch == 'i') || (Ch == 'o') || (Ch == 'u'));
}

int main()
{

    char Ch = ReadChar();

    if (IsVowel(Ch))
        cout << "Yes letter \'" << Ch << "\' is a vowel\n";
    else
        cout << "No letter \'" << Ch << "\' is Not a vowel\n";

    system("pause>0");

    return 0;
}