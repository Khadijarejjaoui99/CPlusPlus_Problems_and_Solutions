#include <iostream>
using namespace std;

int Function1()
{
    static int Number = 1;

    cout << "Number Value is: " << Number << endl;

    Number++;
}

int main()
{
    Function1();
    Function1();
    Function1();

    return 0;
}