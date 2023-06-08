#include <iostream>
using namespace std;

int main()
{
    float LoanAmount, MonthlyPayment, NumberOfMonths;

    cout << "Please enter loan amount\n";
    cin >> LoanAmount;
    cout << "Please enter monthly payment\n";
    cin >> MonthlyPayment;

    NumberOfMonths = LoanAmount / MonthlyPayment;

    cout << NumberOfMonths << " months" << endl;
}