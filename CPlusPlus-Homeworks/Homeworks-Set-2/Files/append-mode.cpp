#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream MyFile;

    MyFile.open("homework2.txt", ios::out | ios::app);

    if (MyFile.is_open())
    {
        MyFile << "My Name is Khadija Rejjaoui.\n";
        MyFile << "This is my C++ homework assignment.\n";
        MyFile << "I'm learning file handling in C++.\n\n";

        MyFile.close();
    }

    return 0;
}