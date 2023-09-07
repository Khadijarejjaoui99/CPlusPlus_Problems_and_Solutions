#include <iostream>
using namespace std;

void Swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int a = 10, b = 30;

    cout << "Before Swap:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    Swap(&a, &b);

    cout << "\nAfter Swap:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}