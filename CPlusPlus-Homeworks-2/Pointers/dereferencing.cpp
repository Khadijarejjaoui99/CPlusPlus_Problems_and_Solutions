#include <iostream>
using namespace std;

int main()
{
    int a = 20;
    int *ptr = &a;

    cout << "a = " << a << endl;
    cout << "ptr = " << ptr << endl;
    cout << "Value of the address that ptr is pointing to is: " << *ptr << endl;

    *ptr = 100;

    cout << "\na = " << a << endl;
    cout << "ptr = " << ptr << endl;
    cout << "Value of the address that ptr is pointing to is: " << *ptr << endl;

    a = 30;
    cout << "\na = " << a << endl;
    cout << "ptr = " << ptr << endl;
    cout << "Value of the address that ptr is pointing to is: " << *ptr << endl;

    return 0;
}