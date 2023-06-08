#include <iostream>
using namespace std;

int main()
{
    float LoanAmount, MonthlyPayment, NumberOfMonths;

    cout << "Please enter loan amount\n";
    cin >> LoanAmount;
    cout << "Please enter number of months\n";
    cin >> NumberOfMonths;

    MonthlyPayment = LoanAmount / NumberOfMonths;
    cout << "Your monthly installments is: " << MonthlyPayment << endl;
    return 0;
}