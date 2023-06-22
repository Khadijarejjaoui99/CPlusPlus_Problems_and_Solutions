#include <iostream>
using namespace std;

int PositiveNumbersSum()
{
    int Sum = 0, Num = 0;

    while (true)
    {
        cout << "Please enter a positive number: \n";
        cin >> Num;
        if (Num < 0)
        {
            break;
        }
        Sum += Num;
    }

    return Sum;
}

int main()
{
    cout << "Sum = " << PositiveNumbersSum() << endl;
    return 0;
}