#include <iostream>
using namespace std;

float ReadTotalSales()
{
    float TotalSales;

    cout << "Please enter total sales amount:\n";
    cin >> TotalSales;

    return TotalSales;
}

float GetPercentage(float TotalSales)
{
    if (TotalSales >= 1000000)
        return 0.01;
    else if (TotalSales >= 500000)
        return 0.02;
    else if (TotalSales >= 100000)
        return 0.03;
    else if (TotalSales >= 50000)
        return 0.05;
    else
        return 0.00;
}

float CalculateCommision(float TotalSales)
{
    return GetPercentage(TotalSales) * TotalSales;
}

void PrintCommissionAndPercentage(float TotalSales)
{
    cout << "Percentage is: " << GetPercentage(TotalSales) << endl;
    cout << "Total commission is: " << CalculateCommision(TotalSales) << endl;
}

int main()
{

    PrintCommissionAndPercentage(ReadTotalSales());
    return 0;
}