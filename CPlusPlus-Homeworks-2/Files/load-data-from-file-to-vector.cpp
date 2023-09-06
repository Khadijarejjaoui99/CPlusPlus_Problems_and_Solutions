#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

void LoadDataFromFileToVector(string FileName, vector<string> &vNames)
{
    fstream MyFile;

    MyFile.open(FileName, ios::in);

    if (MyFile.is_open())
    {
        string Line;

        while (getline(MyFile, Line))
        {
            vNames.push_back(Line);
        }

        MyFile.close();
    }
}

void PrintVectorContents(vector<string> &vNames)
{
    for (string &Line : vNames)
        cout << Line << endl;
}

int main()
{
    vector<string> vNames;

    LoadDataFromFileToVector("Names.txt", vNames);
    PrintVectorContents(vNames);

    return 0;
}