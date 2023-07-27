#include <iostream>
using namespace std;

int main()
{
    int Arr[4] = {10, 20, 30, 40};
    int *ptr = Arr;

    // ptr is equivalent to &arr[0] and arr
    // ptr + 1 is equivalent to &arr[1] and arr+1
    // ptr + 2 is equivalent to &arr[2] and arr + 2
    // ptr + 3 is equivalent to &arr[3] and arr + 3

    cout << "\nAddresses:\n";

    for (int i = 0; i < 4; i++)
        cout << ptr + i << "\n";

    cout << "\nValues:\n";

    for (int i = 0; i < 4; i++)
        cout << *(ptr + i) << endl;

    return 0;
}