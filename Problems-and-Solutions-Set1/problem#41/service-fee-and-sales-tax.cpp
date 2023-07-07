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

float CalculeTotalBill(float BillValue)
{
    float TotalBill = BillValue * 1.1;
    TotalBill = TotalBill * 1.16;
    return TotalBill;
}

int main()
{
    float BillValue = ReadPositiveNumber("Please enter Total Bill:");

    cout << "Total Bill = " << CalculeTotalBill(BillValue) << endl;

    return 0;
}