#include <iostream>
using namespace std;

float ReadPositiveNumber(string Msg)
{
    float Num;

    do
    {
        cout << Msg << endl;
        cin >> Num;
    } while (Num <= 0);

    return Num;
}

float CaculateMonthlyInstallment(float LoanAmount, float TotalNumberOfMonths)
{
    return LoanAmount / TotalNumberOfMonths;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Please enter Loan amount");
    float TotalNumberOfMonths = ReadPositiveNumber("How many months you need to settle the loan ");

    cout << "Monthly Installment = " << CaculateMonthlyInstallment(LoanAmount, TotalNumberOfMonths) << endl;

    system("pause");

    return 0;
}