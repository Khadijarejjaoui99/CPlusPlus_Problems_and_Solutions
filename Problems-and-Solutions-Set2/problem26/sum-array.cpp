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
    Length = ReadNumberInRange(1, 100, "How many elements do you want in the array (1 to 100):");

    for (int i = 0; i < Length; i++)
    {
        Array[i] = GetRandomNumber(1, 100);
    }
}

void PrintArrayData(int Array[100], int Length)
{
    cout << "Array Elements are: ";

    for (int i = 0; i < Length; i++)
        cout << Array[i] << " ";

    cout << endl;
}

int SumOfArrayNumbers(int Array[100], int Length)
{
    int Sum = 0;

    for (int i = 0; i < Length; i++)
    {
        Sum += Array[i];
    }

    return Sum;
}

int main()
{
    srand((unsigned)time(NULL));

    int Array[100], Length = 0;

    FillArrayWithRandomNumbers(Array, Length);

    PrintArrayData(Array, Length);

    cout << "Sum of All Numbers is: " << SumOfArrayNumbers(Array, Length) << endl;
    return 0;
}