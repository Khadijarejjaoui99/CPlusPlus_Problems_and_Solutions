#include <iostream>
using namespace std;

int ReadNumber(string Msg)
{
    int Number;

    cout << Msg << endl;
    cin >> Number;

    return Number;
}

void ReadArrayData(int Array[100], int &Length)
{
    Length = ReadNumber("How many numbers do you want to enter? 1 to 100?");

    for (int i = 0; i <= Length - 1; i++)
    {
        cout << "Please enter Number " << i + 1 << ":\n";
        cin >> Array[i];
    }
}

void PrintArrayData(int Array[100], int Length)
{
    for (int i = 0; i <= Length - 1; i++)
    {
        cout << "Number [" << i + 1 << "] = " << Array[i] << endl;
    }
}

int CalculateArraySum(int Array[100], int Length)
{
    int Sum = 0;

    for (int i = 0; i <= Length - 1; i++)
    {
        Sum += Array[i];
    }

    return Sum;
}

float CalculateArrayAverage(int Array[100], int Length)
{
    return (float)CalculateArraySum(Array, Length) / Length;
}

int main()
{
    int Arr[100], Length;

    ReadArrayData(Arr, Length);
    PrintArrayData(Arr, Length);

    cout << "*******************************\n";

    cout << "Sum = " << CalculateArraySum(Arr, Length) << endl;
    cout << "Average = " << CalculateArrayAverage(Arr, Length) << endl;

    return 0;
}