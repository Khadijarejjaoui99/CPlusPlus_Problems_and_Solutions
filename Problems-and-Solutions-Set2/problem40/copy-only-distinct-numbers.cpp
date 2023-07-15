#include <iostream>
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

void FillArray(int Array[100], int &Length)
{
    Length = ReadNumberInRange(1, 100, "How many numbers do you want to enter(1 to 100):");

    for (int i = 0; i < Length; i++)
    {
        cout << "Please enter number " << i + 1 << ":" << endl;
        cin >> Array[i];
    }
}

bool IsNumberInArray(int Number, int Array[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        if (Array[i] == Number)
            return true;
    }
    return false;
}

void AddArrayElement(int Number, int Array[100], int &Length)
{
    Length++;
    Array[Length - 1] = Number;
}

void CopyOnlyDistinctNumbers(int ArraySource[100], int ArrayDestination[100], int Length1, int &Length2)
{
    for (int i = 0; i < Length1; i++)
    {
        if (!IsNumberInArray(ArraySource[i], ArrayDestination, Length2))
        {
            AddArrayElement(ArraySource[i], ArrayDestination, Length2);
        }
    }
}

void PrintArrayData(int Array[100], int Length)
{
    for (int i = 0; i < Length; i++)
        cout << Array[i] << " ";

    cout << endl;
}
int main()
{
    int Array1[100], Array2[100], Length1 = 0, Length2 = 0;

    FillArray(Array1, Length1);

    CopyOnlyDistinctNumbers(Array1, Array2, Length1, Length2);

    cout << "Array 1 Elements:\n";

    PrintArrayData(Array1, Length1);

    cout << "Array 2 Elements:\n";
    PrintArrayData(Array2, Length2);

    return 0;
}