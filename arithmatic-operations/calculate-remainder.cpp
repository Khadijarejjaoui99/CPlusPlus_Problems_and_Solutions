#include <iostream>
using namespace std;

int main()
{
    float TotalBill, CashPaid, Remainder;

    cout << "Please enter the total bill:\n";
    cin >> TotalBill;
    cout << "Please enter the cash paid:\n";
    cin >> CashPaid;

    Remainder = CashPaid - TotalBill;
    cout << "The remainder to be paid back is: " << Remainder << endl;
}