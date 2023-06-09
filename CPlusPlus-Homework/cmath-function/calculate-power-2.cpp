#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int Number, M, Result;

    cout << "Please enter a number:\n";
    cin >> Number;
    cout << "Please enter power M:\n";
    cin >> M;

    Result = pow(Number, M);

    cout << "Result = " << Result << endl;

    return 0;
}
