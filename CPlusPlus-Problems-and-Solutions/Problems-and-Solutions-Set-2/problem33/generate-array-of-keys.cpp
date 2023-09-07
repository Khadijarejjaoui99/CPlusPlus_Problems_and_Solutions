#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadNumberInRange(int From, int To, string Msg)
{
    int Number;

    do
    {
        cout << Msg << endl;
        cin >> Number;
    } while (Number < From || Number > To);

    return Number;
}

int GetRandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}
char RandomUpperCaseCharacter()
{
    return char(GetRandomNumber(65, 90));
}

string GenerateWord(int WordLength)
{
    string Word = "";
    for (int i = 1; i <= WordLength; i++)
    {
        Word += RandomUpperCaseCharacter();
    }

    return Word;
}

string GenerateKey()
{
    string Key = "";

    for (int i = 1; i <= 4; i++)
    {
        Key += GenerateWord(4);
        if (i != 4)
            Key += '-';
    }

    return Key;
}

void FillArrayWithKeys(string Keys[100], int &NumberOfKeys)
{
    NumberOfKeys = ReadNumberInRange(1, 100, "How many keys do you want to generate(1, 100):");

    for (int i = 0; i < NumberOfKeys; i++)
    {
        Keys[i] = GenerateKey();
    }
}

void PrintArrayData(string Array[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        cout << "Array[" << i << "]: " << Array[i] << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    string Keys[100];
    int NumberOfKeys = 0;

    FillArrayWithKeys(Keys, NumberOfKeys);

    PrintArrayData(Keys, NumberOfKeys);

    return 0;
}