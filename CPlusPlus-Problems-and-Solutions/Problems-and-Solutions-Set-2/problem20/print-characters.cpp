#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enCharacters
{
    LowerCase = 1,
    UpperCase = 2,
    Special = 3,
    Digit = 4
};

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

char RandomCharacter(enCharacters Character)
{
    switch (Character)
    {
    case enCharacters::LowerCase:
        return char(RandomNumber(97, 122));
    case enCharacters::UpperCase:
        return char(RandomNumber(65, 90));
    case enCharacters::Special:
        return char(RandomNumber(33, 47));
    case enCharacters::Digit:
        return char(RandomNumber(48, 57));
    default:
        return char(RandomNumber(65, 90));
    }
}

int main()
{
    srand((unsigned)time(NULL));

    cout << RandomCharacter(enCharacters::LowerCase) << endl;
    cout << RandomCharacter(enCharacters::UpperCase) << endl;
    cout << RandomCharacter(enCharacters::Special) << endl;
    cout << RandomCharacter(enCharacters::Digit) << endl;
    return 0;
}