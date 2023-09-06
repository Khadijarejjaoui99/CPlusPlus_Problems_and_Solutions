#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void LoadDataFromFileToVector(string FileName, vector<string> &vFileContents)
{
    fstream MyFile;

    MyFile.open(FileName, ios::in);

    if (MyFile.is_open())
    {
        string Line;

        while (getline(MyFile, Line))
        {
            vFileContents.push_back(Line);
        }

        MyFile.close();
    }
}

void SaveVectorToFile(string FileName, vector<string> vFileContents)
{
    fstream MyFile;

    MyFile.open(FileName, ios::out);

    if (MyFile.is_open())
    {
        for (string &Line : vFileContents)
        {
            if (Line != "")
                MyFile << Line << endl;
        }

        MyFile.close();
    }
}

void DeleteRecordFromFile(string FileName, string Record)
{
    vector<string> vFileContents;

    LoadDataFromFileToVector(FileName, vFileContents);

    for (string &Line : vFileContents)
    {
        if (Line == Record)
            Line = "";
    }

    SaveVectorToFile(FileName, vFileContents);
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
    DeleteRecordFromFile("Names.txt", "Jennifer Lee");
    PrintFile("Names.txt");
    return 0;
}