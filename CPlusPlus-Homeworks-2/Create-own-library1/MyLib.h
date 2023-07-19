#pragma once
#include <iostream>
using namespace std;

namespace MyLib
{
    void test()
    {
        cout << "Test Function\n";
    }

    string ReadName()
    {
        string Name;

        cout << "Please enter your name:\n";
        cin >> Name;

        return Name;
    }

    void PrintName(string Name)
    {
        cout << "Your Name is: " << Name << endl;
    }
}
