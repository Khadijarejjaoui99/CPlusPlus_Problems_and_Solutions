#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.14;
    float Circumference, Area;

    cout << "Please enter the circumference:\n";
    cin >> Circumference;

    Area = (Circumference * Circumference) / (4 * PI);

    cout << "Circle area along the circumstance is: " << Area << endl;

    return 0;
}