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

void FillArrayWithRandomNumbes(int Array[100], int &Length)
{
    Length = ReadNumberInRange(1, 100, "How many numbers do you want in the array:");

    for (int i = 0; i < Length; i++)
    {
        Array[i] = GetRandomNumber(1, 100);
    }
}

void PrintArrayData(int Array[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;
}

int FindNumberIndex(int Array[100], int Length, int Number)
{
    for (int i = 0; i < Length; i++)
    {
        if (Array[i] == Number)
            return i;
    }

    return -1;
}

bool IsNumberInArray(int Array[100], int Length, int Number)
{
    return FindNumberIndex(Array, Length, Number) != -1;
}

void FindNumberInArray(int Array[100], int Length, int Number)
{
    if (IsNumberInArray(Array, Length, Number))

        cout << "Yes, The number is Found\n";
    else
        cout << "No, The number is Not Found\n";
}

int main()
{
    srand((unsigned)time(NULL));

    int Array[100], Length = 0, NumberToSearch = 0;

    FillArrayWithRandomNumbes(Array, Length);

    cout << "Array Elements are:\n";
    PrintArrayData(Array, Length);

    NumberToSearch = ReadNumberInRange(1, 100, "Please enter a number to search for (1 to 100):");

    cout << "Number you are looking for is: " << NumberToSearch << endl;

    FindNumberInArray(Array, Length, NumberToSearch);

    return 0;
}