#include <iostream>
using namespace std;

// Function Declaration
int Sum(int, int);
int Sub(int, int);
int Mult(int, int);

int main()
{
    int a = 5, b = 10;

    cout << "Sum = " << Sum(a, b) << endl;
    cout << "Substraction = " << Sub(a, b) << endl;
    cout << "Multiplication = " << Mult(a, b) << endl;
    return 0;
}

// Function Definition

int Sum(int a, int b)
{
    return a + b;
}
int Sub(int a, int b)
{
    return a - b;
}
int Mult(int a, int b)
{
    return a * b;
}