#include <iostream>
using namespace std;

void MySumProcedure()
{
    int Number1, Number2;
    cout << "Please enter Number1:\n";
    cin >> Number1;
    cout << "Please enter Number2:\n";
    cin >> Number2;

    cout << "**********************\n";
    cout << Number1 + Number2 << endl;
}

int main()
{
    MySumProcedure();
}