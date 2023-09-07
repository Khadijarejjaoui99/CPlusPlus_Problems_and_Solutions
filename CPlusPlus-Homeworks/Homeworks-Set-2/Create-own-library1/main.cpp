#include <iostream>
#include "MyLib.h"
using namespace std;
using namespace MyLib;

int main()
{
    // MyLib::test();
    test();

    PrintName(ReadName());

    return 0;
}