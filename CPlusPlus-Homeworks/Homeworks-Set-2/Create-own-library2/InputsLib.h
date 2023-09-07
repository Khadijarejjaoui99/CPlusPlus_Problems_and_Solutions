#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

namespace InputsLib
{
    int GetRandomNumber(int From, int To)
    {
        return rand() % (To - From + 1) + From;
    }

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

}