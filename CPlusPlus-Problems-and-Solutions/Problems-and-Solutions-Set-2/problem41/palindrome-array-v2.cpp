#include <iostream>
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

void FillArray(int Array[100], int &Length)
{
    Length = ReadNumberInRange(1, 100, "How many numbers do you want to enter:");

    for (int i = 0; i < Length; i++)
    {
        cout << "Please enter number " << i + 1 << ": ";
        cin >> Array[i];
    }
}

void PrintArray(int Array[100], int Length)
{
    for (int i = 0; i < Length; i++)
        cout << Array[i] << " ";

    cout << endl;
}

bool IsArrayPalindrome(int Array[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        if (Array[i] != Array[Length - 1 - i])
            return false;
    }
    return true;
}

int main()
{
    int Array[100], Length = 0;

    FillArray(Array, Length);

    cout << "Array Elements are: ";
    PrintArray(Array, Length);

    if (IsArrayPalindrome(Array, Length))
        cout << "Yes, Array is Palindrome\n";
    else
        cout << "No, Array is NOT Palindrome\n";

    return 0;
}