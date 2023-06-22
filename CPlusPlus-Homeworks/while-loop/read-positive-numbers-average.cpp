#include <iostream>
using namespace std;

void PrintAverageOfPositiveNumbers()
{
    int Num = 0, Counter = 0;
    float Sum = 0, Average = 0;

    cout << "Please enter a positive number:\n";
    cin >> Num;

    while (Num >= 0)
    {
        Sum += Num;
        Counter++;
        cout << "Please enter a positive number:\n";
        cin >> Num;
    }

    if (Counter != 0)
        Average = Sum / Counter;

    cout << "Average = " << Average << endl;
}

int main()
{
    PrintAverageOfPositiveNumbers();

    return 0;
}