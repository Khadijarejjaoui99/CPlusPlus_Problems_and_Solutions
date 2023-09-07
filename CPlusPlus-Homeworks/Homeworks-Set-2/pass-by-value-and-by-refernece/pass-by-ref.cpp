#include <iostream>
using namespace std;

void Function(int &x)
{
    x++;
}

int main()
{
    int a = 10;

    cout << " a value before passing it to Function(): " << a << endl;

    Function(a);

    cout << " a value after passing it to Function(): " << a << endl;

    return 0;
}