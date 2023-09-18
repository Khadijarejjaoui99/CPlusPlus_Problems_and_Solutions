#include <iostream>
using namespace std;

int ReadNumber()
{
    int Num;

    cout << "Please enter a number:\n";
    cin >> Num;

    return Num;
}

void Powerof2_3_4(int Num)
{
    int PowerOfTwo = Num * Num;
    int PowerOfThree = PowerOfTwo * Num;
    int PowerOfFour = PowerOfThree * Num;
    cout << Num << "^2 = " << PowerOfTwo << endl;
    cout << Num << "^3 = " << PowerOfThree << endl;
    cout << Num << "^4 = " << PowerOfFour << endl;
}

int main()
{
    Powerof2_3_4(ReadNumber());
    return 0;
}