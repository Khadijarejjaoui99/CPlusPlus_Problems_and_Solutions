#include <iostream>
using namespace std;

int main()
{
    int Num1;
    float Num2, Result;

    cout << "Please enter an integer number:\n";
    cin >> Num1;

    Num2 = (float)Num1;
    Result = Num2 * 1.5;

    cout << "Result = " << Result << endl;

    return 0;
}