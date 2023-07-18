#include <iostream>
using namespace std;
int Sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a = 12, b = 5;
    a++;
    b--;

    int C = a + b;

    cout << a << endl;
    cout << b << endl;

    cout << C << endl;
    cout << Sum(a, b) << endl;

    return 0;
}