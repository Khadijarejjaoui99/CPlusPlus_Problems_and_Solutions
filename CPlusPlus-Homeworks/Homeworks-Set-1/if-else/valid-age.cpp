#include <iostream>
using namespace std;

void ReadAge(short &Age)
{
    cout << "Please enter Age:\n";
    cin >> Age;
}

void CheckValidAge(short Age)
{
    if (Age >= 18 && Age <= 45)
        cout << "Valid Age\n";
    else
        cout << "Invalid Age\n";
}

int main()
{
    short Age;
    ReadAge(Age);
    CheckValidAge(Age);
    return 0;
}