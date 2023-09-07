#include <iostream>
using namespace std;

int main()
{
    float num1, num2, num3, average;

    cout << "Please enter number 1:\n";
    cin >> num1;
    cout << "Please enter number 2:\n";
    cin >> num2;
    cout << "Please enter number 3:\n";
    cin >> num3;

    average = (num1 + num2 + num3) / 3;

    cout << "Average = " << average << endl;
}