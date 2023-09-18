#include <iostream>
using namespace std;

float ReadNumber(string Msg)
{
    float Num;

    do
    {
        cout << Msg << endl;
        cin >> Num;
    } while (Num < 0);
    return Num;
}

float CalculateRemainder(float TotalBill, float CashPaid)
{
    return CashPaid - TotalBill;
}

void PrintBill(float TotalBill, float CashPaid, float Remainder)
{
    cout << "\n Total Bill = " << TotalBill << endl;
    cout << " Cash Paid = " << CashPaid << endl;
    cout << "******************************\n";
    cout << " Remainder = " << Remainder << endl;
}

int main()
{
    float TotalBill = ReadNumber("Please enter Total Bill");
    float CashPaid = ReadNumber("Please enter Cash Paid");

    float Remainder = CalculateRemainder(TotalBill, CashPaid);

    PrintBill(TotalBill, CashPaid, Remainder);
}