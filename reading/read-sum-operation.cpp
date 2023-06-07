#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, total;

    cout << "Please enter number 1:\n";
    cin >> num1;
    cout << "Please enter number 2:\n";
    cin >> num2;
    cout << "Please enter number 3:\n";
    cin >> num3;

    total = num1 + num2 + num3;

    cout << endl;
    cout << num1 << " +\n";
    cout << num2 << " +\n";
    cout << num3 << "\n";
    cout << "---------------\n";
    cout << "Total = " << total << endl;

    return 0;
}