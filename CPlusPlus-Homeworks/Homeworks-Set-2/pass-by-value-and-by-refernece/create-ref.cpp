#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &x = a;

    cout << "Address of a: " << &a << endl;
    cout << "Address of x: " << &x << endl;

    cout << "Value of a: " << a << endl;
    cout << "Value of x: " << x << endl;

    // Apply changes on x:

    x = 30;

    cout << "Value of a: " << a << endl;
    cout << "Value of x: " << x << endl;

    // Apply changes on a:

    a = 100;

    cout << "Value of a: " << a << endl;
    cout << "Value of x: " << x << endl;

    return 0;
}