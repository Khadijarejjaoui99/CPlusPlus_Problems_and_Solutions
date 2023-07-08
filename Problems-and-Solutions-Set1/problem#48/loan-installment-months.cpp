#include <iostream>
using namespace std;

float ReadPositiveNumber(string Msg)
{
    float Num;

    do
    {
        cout << Msg << endl;
        cin >> Num;
    } while (Num < 0);
    return Num;
}

float CalculateNumberOfMonths(float LoanAmount, float MonthlyPayment)
{
    return LoanAmount / MonthlyPayment;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount:");
    float MonthlyPayment = ReadPositiveNumber("Please Enter Monthly Payment:");

    cout << CalculateNumberOfMonths(LoanAmount, MonthlyPayment) << " Months" << endl;

    system("pause");

    return 0;
}