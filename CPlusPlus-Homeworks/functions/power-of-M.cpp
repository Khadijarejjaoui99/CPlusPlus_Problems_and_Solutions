#include <iostream>
#include <cmath>
using namespace std;

void CalculatePowerOfM()
{
    int Num, M;

    cout << "Enter a number:\n";
    cin >> Num;
    cout << "Enter power M:\n";
    cin >> M;

    cout << Num << "^" << M << " = " << pow(Num, M) << endl;
}
int main()
{
    CalculatePowerOfM();

    return 0;
}