#include <iostream>
#include <limits>
using namespace std;

int ReadNumber()
{
    int Number;

    cout << "Please enter a number:\n";
    cin >> Number;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalid Input! Please enter a number:\n";
        cin >> Number;
    }

    return Number;
}
int main()
{
    cout << ReadNumber() << endl;
    return 0;
}