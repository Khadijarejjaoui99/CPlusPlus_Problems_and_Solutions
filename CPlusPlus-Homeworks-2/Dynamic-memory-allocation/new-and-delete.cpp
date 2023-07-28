#include <iostream>
using namespace std;

int main()
{
    int *ptrX;
    float *ptrY;

    // Dynamically allocate memory
    ptrX = new int;
    ptrY = new float;

    // Assigning values to the memory
    *ptrX = 15;
    *ptrY = 17.6;

    cout << ptrX << endl;
    cout << *ptrX << endl;
    cout << ptrY << endl;
    cout << *ptrY << endl;

    // Deallocate memory
    delete ptrX;
    delete ptrY;

    return 0;
}