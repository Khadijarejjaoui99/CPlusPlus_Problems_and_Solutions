#include <iostream>
using namespace std;

int main()
{
    float BillValue;
    cout << "Please enter bill value:\n";
    cin >> BillValue;

    BillValue = BillValue * 1.1 * 1.16;

    cout << "Total bill is: " << BillValue << endl;
}