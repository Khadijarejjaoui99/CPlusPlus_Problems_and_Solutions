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

int GetRandomNumbers(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int Array[100], int &Length)
{
    Length = ReadNumberInRange(1, 100, "How many numbers do you want to enter (1 to 100):");

    for (int i = 0; i < Length; i++)
    {
        Array[i] = GetRandomNumbers(1, 100);
    }
}

void PrintArray(int Array[100], int Length)
{
    for (int i = 0; i < Length; i++)
        cout << Array[i] << " ";

    cout << endl;
}

int CountOddNumberInArray(int Array[100], int Length)
{
    int Counter = 0;

    for (int i = 0; i < Length; i++)
    {
        if (Array[i] % 2 != 0)
            Counter++;
    }

    return Counter;
}

int main()
{
    srand((unsigned)time(NULL));

    int Array[100], Length = 0;

    FillArrayWithRandomNumbers(Array, Length);

    cout << "Array Elements are: ";
    PrintArray(Array, Length);

    cout << "Odd Numbers Count is: " << CountOddNumberInArray(Array, Length) << endl;

    return 0;
}