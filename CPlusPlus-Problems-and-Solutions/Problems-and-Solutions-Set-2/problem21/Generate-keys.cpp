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

int ReadPositiveNumber(string Msg)
{
    int Number;

    do
    {
        cout << Msg << endl;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

char GetRandomCharacter(enCharacters CharacterType)
{
    switch (CharacterType)
    {
    case enCharacters::UpperCase:
        return char(RandomNumber(65, 90));
    case enCharacters::LowerCase:
        return char(RandomNumber(97, 122));
    case enCharacters::Special:
        return char(RandomNumber(33, 47));
    case enCharacters::Digit:
        return char(RandomNumber(48, 57));
    default:
        return char(RandomNumber(65, 90));
    }
}

string GenerateRandomWord(enCharacters CharacterType, short WordLength)
{
    string Word = "";
    for (int i = 1; i <= WordLength; i++)
    {
        Word += GetRandomCharacter(CharacterType);
    }
    return Word;
}

string GenerateKey(short KeyLength)
{
    string Key = "";

    for (int i = 1; i <= KeyLength; i++)
    {

        Key += GenerateRandomWord(enCharacters::UpperCase, 4);

        if (i != KeyLength)
            Key += '-';
    }
    return Key;
}

void GenerateRandomKeys(int NumberOfKeys)
{
    for (int i = 1; i <= NumberOfKeys; i++)
    {
        cout << "Key [" << i << "]: " << GenerateKey(4) << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    GenerateRandomKeys(ReadPositiveNumber("How many keys do you want to generate:"));
    return 0;
}