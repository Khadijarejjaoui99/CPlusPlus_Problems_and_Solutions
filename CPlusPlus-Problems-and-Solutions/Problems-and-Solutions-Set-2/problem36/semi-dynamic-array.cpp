#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number;

    cout << "\nPlease enter a number: ";
    cin >> Number;

    return Number;
}

void AddArrayElement(int Number, int Array[100], int &Length)
{
    Length++;

    Array[Length - 1] = Number;
}

void FillArrayWithUserInput(int Array[100], int &Length)
{
    bool AddMore = true;

    do
    {
        AddArrayElement(ReadNumber(), Array, Length);

        cout << "\nDo you want to add more numbers? [0]: No, [1]:Yes: ";
        cin >> AddMore;

    } while (AddMore);
}
void PrintArrayData(int Array[100], int Length)
{
    for (int i = 0; i < Length; i++)
        cout << Array[i] << " ";

    cout << endl;
}
int main()
{
    int Array[100], Length = 0;

    FillArrayWithUserInput(Array, Length);

    cout << "\nArray Length: " << Length << endl;

    cout << "\nArray Elements: ";
    PrintArrayData(Array, Length);
    return 0;
}