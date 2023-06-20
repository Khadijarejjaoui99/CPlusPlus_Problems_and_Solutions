#include <iostream>
using namespace std;

const int NUM_MONTHS = 12;

void ReadMonthlySales(double monthlySales[NUM_MONTHS])
{
    for (int i = 0; i < NUM_MONTHS; i++)
    {
        cout << "Please enter the total sales for month " << i + 1 << ": ";
        cin >> monthlySales[i];
    }
}

void PrintMonthlySales(double monthlySales[NUM_MONTHS])
{
    for (int i = 0; i < NUM_MONTHS; i++)
    {
        cout << "Total Sales in Month " << i + 1 << " is " << monthlySales[i] << endl;
    }
}

double CalculateAverageMonthlySales(const double monthlySales[NUM_MONTHS])
{
    double sum = 0;

    for (int i = 0; i < NUM_MONTHS; i++)
    {
        sum += monthlySales[i];
    }

    return sum / NUM_MONTHS;
}

int main()
{
    double monthlySales[NUM_MONTHS];

    ReadMonthlySales(monthlySales);

    cout << "*************************************\n";
    PrintMonthlySales(monthlySales);
    cout << "The Average Monthly Sales = " << CalculateAverageMonthlySales(monthlySales) << endl;

    return 0;
}
