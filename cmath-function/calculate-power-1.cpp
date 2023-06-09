#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float Number;

    cout << "Please enter a number:\n";
    cin >> Number;

    cout << Number << "^2 = " << pow(Number, 2) << endl;
    cout << Number << "^3 = " << pow(Number, 3) << endl;
    cout << Number << "^4 = " << pow(Number, 4) << endl;

    return 0;
}