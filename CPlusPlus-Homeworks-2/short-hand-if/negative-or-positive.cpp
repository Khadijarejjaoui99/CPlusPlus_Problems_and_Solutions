#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number;

    cout << "Please enter a number:\n";
    cin >> Number;

    return Number;
}

string PositiveOrNegative(int Number)
{
    return (Number > 0) ? "Positive" : "Negative";
}

int main()
{
    cout << PositiveOrNegative(ReadNumber()) << endl;

    return 0;
}