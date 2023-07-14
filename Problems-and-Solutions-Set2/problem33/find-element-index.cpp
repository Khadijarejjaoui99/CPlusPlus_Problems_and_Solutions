#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadNumberInRange(int From, int To, string Msg)
{
    int Number = 0;

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

void FillArrayWithRandomNumbers(int Array[100], int &Length)
{
    Length = ReadNumberInRange(1, 100, "How many elements do you want in the array");

    for (int i = 0; i < Length; i++)
    {
        Array[i] = GetRandomNumber(1, 100);
    }
}

void PrintArray(int Array[100], int Length)
{
    for (int i = 0; i < Length; i++)
        cout << Array[i] << " ";

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
void PrintNumberPosition(int Array[100], int Length, int Number)
{
    int Index = FindNumberIndex(Array, Length, Number);

    cout << "Number you are looking for is: " << Number << endl;

    if (Index != -1)
    {
        cout << "The number found at position: " << Index << endl;
        cout << "The number found at order: " << Index + 1 << endl;
    }
    else
        cout << "The number is not found :(" << endl;
}
int main()
{

    srand((unsigned)time(NULL));

    int Array[100], Length = 0, NumberToSearchFor = 0;

    FillArrayWithRandomNumbers(Array, Length);

    cout << "Array Elements are:\n";
    PrintArray(Array, Length);

    NumberToSearchFor = ReadNumberInRange(1, 100, "Please enter a number to search for (1 to 100):");

    PrintNumberPosition(Array, Length, NumberToSearchFor);

    return 0;
}