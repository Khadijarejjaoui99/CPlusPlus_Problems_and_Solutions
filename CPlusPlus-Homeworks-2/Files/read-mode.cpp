#include <iostream>
#include <fstream>
using namespace std;

void PrintFileContents(string FileName)
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
    PrintFileContents("homework1.txt");
    return 0;
}