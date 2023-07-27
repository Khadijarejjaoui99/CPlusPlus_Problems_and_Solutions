#include <iostream>
using namespace std;

int main()
{
    int x = 20;
    float y = 40.5;

    void *ptr = &x;

    cout << "ptr point to x:\n";
    cout << "ptr = " << ptr << endl;

    // To change integer variable x:
    *(static_cast<int *>(ptr)) = 80;
    cout << "x = " << x << endl;
    cout << "*ptr =  " << *(static_cast<int *>(ptr)) << endl;

    // Let's pointer point to y which is of type float;
    ptr = &y;

    cout << "\nptr now point to y:\n";
    cout << "ptr now = " << ptr << endl;
    cout << "y = " << y << endl;
    cout << "*ptr now = " << *(static_cast<float *>(ptr)) << endl;

    return 0;
}