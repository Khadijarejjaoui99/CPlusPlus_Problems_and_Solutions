#include <iostream>
using namespace std;

int main()
{
    char c;
    int ascii_value;

    cout << "Please enter character:\n";
    cin >> c;

    ascii_value = (int)c;

    cout << "ASCII value of " << c << " is: " << ascii_value << endl;
}