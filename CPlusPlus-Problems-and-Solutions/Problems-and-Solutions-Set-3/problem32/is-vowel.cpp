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
    char Vowels[] = {'a', 'e', 'i', 'o', 'u'};

    for (short i = 0; i < 5; i++)
    {
        if (Vowels[i] == tolower(Ch))
            return true;
    }
    return false;
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