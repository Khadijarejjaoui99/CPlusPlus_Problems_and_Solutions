#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.14;
    float Diameter, Area;

    cout << "Please enter diameter:\n";
    cin >> Diameter;

    Area = (PI * Diameter * Diameter) / 4;

    cout << "Circle area through diameter is: " << Area << endl;

    return 0;
}