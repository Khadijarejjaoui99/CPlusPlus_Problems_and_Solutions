#include <iostream>
using namespace std;

int main()
{
    int a = 20;

    cout << "a value = " << a << endl;
    cout << "a address = " << &a << endl;

    int *ptr = &a;

    cout << "Pointer value: " << ptr << endl;

    return 0;
}