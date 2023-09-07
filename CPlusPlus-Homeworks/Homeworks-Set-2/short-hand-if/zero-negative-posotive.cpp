#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number;

    cout << "Please enter a number:\n";
    cin >> Number;

    return Number;
}

string NumberType(int Number)
{
    return (Number == 0) ? "Zero" : ((Number > 0) ? "Positive" : "Negative");
}

int main()
{
    cout << NumberType(ReadNumber()) << endl;

    return 0;
}