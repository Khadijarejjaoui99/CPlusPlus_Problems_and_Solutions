#include <iostream>
using namespace std;

int ReadPositiveNumber(string Msg)
{
    int Number;

    do
    {
        cout << Msg << endl;
        cin >> Number;
    } while (Number < 0);

    return Number;
}

void ReadArrayData(int Array[100], int Length)
{
    cout << "\nEnter Array Elements:\n";
    for (int i = 0; i < Length; i++)
    {
        cout << "Element [" << i + 1 << "]: ";
        cin >> Array[i];
    }
}

void PrintArrayData(int Array[100], int Length)
{
    cout << "\nOriginal Array: ";

    for (int i = 0; i < Length; i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;
}

int NumberFrequency(int Array[100], int Length, int NumberToCheck)
{
    int Counter = 0;

    for (int i = 0; i < Length; i++)
    {
        if (NumberToCheck == Array[i])
        {
            Counter++;
        }
    }
    return Counter;
}

int main()
{
    int Length = ReadPositiveNumber("How many elements do you want to enter:");
    int Array[100];

    ReadArrayData(Array, Length);

    int NumberToCheck = ReadPositiveNumber("\nPlease enter the number you want to check:");

    PrintArrayData(Array, Length);

    cout << NumberToCheck << " is repeated " << NumberFrequency(Array, Length, NumberToCheck) << " time(s)" << endl;
    return 0;
}