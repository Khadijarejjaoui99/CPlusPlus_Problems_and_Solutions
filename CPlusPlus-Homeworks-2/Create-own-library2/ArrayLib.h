#pragma
#include <iostream>
#include "InputsLib.h"
using namespace std;
using namespace InputsLib;

namespace ArrayLib
{
    void FillArrayWithRandomNumbers(int Array[100], int &Length)
    {
        Length = ReadNumberInRange(1, 100, "How many numbers do you want in the array:");

        for (int i = 0; i < Length; i++)
            Array[i] = GetRandomNumber(1, 100);
    }

    void PrintArray(int Array[100], int Length)
    {
        for (int i = 0; i < Length; i++)
            cout << Array[i] << " ";

        cout << endl;
    }

    int MaxNumberInArray(int Array[100], int Length)
    {
        int Max = 0;

        for (int i = 0; i < Length; i++)
        {
            if (Array[i] > Max)
                Max = Array[i];
        }

        return Max;
    }

    int MinNumberInArray(int Array[100], int Length)
    {
        int Min = Array[0];

        for (int i = 0; i < Length; i++)
        {
            if (Array[i] < Min)
                Min = Array[i];
        }

        return Min;
    }

    int SumArrayNumbers(int Array[100], int Length)
    {
        int Sum = 0;

        for (int i = 0; i < Length; i++)
        {
            Sum += Array[i];
        }

        return Sum;
    }

    float AverageArrayNumbers(int Array[100], int Length)
    {
        return (float)SumArrayNumbers(Array, Length) / Length;
    }

    void AddElementToArray(int Number, int Array[100], int &Length)
    {
        Length++;
        Array[Length - 1] = Number;
    }

    void CopyArrayElements(int ArraySource[100], int ArrayDestination[100], int Length1, int &Length2)
    {
        for (int i = 0; i < Length1; i++)
            AddElementToArray(ArraySource[i], ArrayDestination, Length2);
    }
}