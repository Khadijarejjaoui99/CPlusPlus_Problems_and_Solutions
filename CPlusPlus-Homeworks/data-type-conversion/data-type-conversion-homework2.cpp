#include <iostream>
using namespace std;

int main()
{
    float num_float;
    int num_int;

    cout << "Please enter a float-point number:\n";
    cin >> num_float;

    num_int = int(num_float);

    cout << num_int << endl;

    return 0;
}