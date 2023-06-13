#include <iostream>
#include <cmath>
using namespace std;

void PowerOfTwoThreeFour(int Num)
{
    cout << Num << "^2 = " << pow(Num, 2) << endl;
    cout << Num << "^3 = " << pow(Num, 3) << endl;
    cout << Num << "^4 = " << pow(Num, 4) << endl;
}

int main()
{
    int Num;

    cout << "Please enter a number:\n";
    cin >> Num;

    PowerOfTwoThreeFour(Num);

    return 0;
}