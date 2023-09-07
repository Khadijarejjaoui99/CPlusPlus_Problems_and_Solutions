#include <iostream>
using namespace std;

void ReadTotalSales(float &TotalSales)
{
    cout << "Please enter total sales:\n";
    cin >> TotalSales;
}
float CalculatePercentage(float TotalSales)
{
    if (TotalSales >= 1000000)
        return 0.03;
    else if (TotalSales >= 100000)
        return 0.01;
    else
        return 0;
}
void PrintCommission(float TotalSales)
{
    float Percentage = CalculatePercentage(TotalSales);
    float Commission = TotalSales * Percentage;

    cout << "Percentage = " << Percentage << endl;
    cout << "Commision = " << Commission << endl;
}

int main()
{
    float TotalSales;
    ReadTotalSales(TotalSales);
    PrintCommission(TotalSales);
    return 0;
}