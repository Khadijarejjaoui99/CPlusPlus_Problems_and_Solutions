#include <iostream>
using namespace std;

void ReadNumbers(float &A, float &B)
{
    cout << "Please enter Width A:\n";
    cin >> A;
    cout << "Please enter Length B:\n";
    cin >> B;
}

float CalculateReactangleArea(int A, int B)
{
    return A * B;
}

void PrintArea(float Area)
{
    cout << "\nArea = " << Area << endl;
}

int main()
{
    float A, B;
    ReadNumbers(A, B);
    PrintArea(CalculateReactangleArea(A, B));
    return 0;
}