#include <iostream>
using namespace std;

void ReadNumbers(float &A, float &H)
{
    cout << "Please enter Base A:\n";
    cin >> A;
    cout << "Please enter Height H:\n";
    cin >> H;
}

float TriangleArea(float A, float H)
{
    return (A / 2) * H;
}

void PrintArea(float Area)
{
    cout << "Area = " << Area << endl;
}

int main()
{
    float A, H;

    ReadNumbers(A, H);

    PrintArea(TriangleArea(A, H));

    return 0;
}