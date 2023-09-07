#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream MyFile;

    MyFile.open("homework1.txt", ios::out);

    if (MyFile.is_open())
    {
        MyFile << "My Name is Khadija Rejjaoui.\n";
        MyFile << "This is my C++ homework assignment.\n";
        MyFile << "I'm learning file handling in C++.\n";

        MyFile.close();
    }

    return 0;
}