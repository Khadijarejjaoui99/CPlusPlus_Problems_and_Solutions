#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

void SaveDataFromVectorToFile(string FileName, vector<string> vName)
{
    fstream MyFile;

    MyFile.open(FileName, ios::out);

    if (MyFile.is_open())
    {
        for (string &Line : vName)
        {
            if (Line != "")
                MyFile << Line << endl;
        }

        MyFile.close();
    }
}

void PrintFile(string FileName)
{
    fstream MyFile;

    MyFile.open(FileName, ios::in);

    if (MyFile.is_open())
    {
        string Line;

        while (getline(MyFile, Line))
        {
            cout << Line << endl;
        }

        MyFile.close();
    }
}

int main()
{
    vector<string> vFruits = {"apple", "banana", "cherry", "date", "fig", "grape", "honeydew", "kiwi", "lemon", "mango"};

    SaveDataFromVectorToFile("fruit-names.txt", vFruits);
    PrintFile("fruit-names.txt");

    return 0;
}