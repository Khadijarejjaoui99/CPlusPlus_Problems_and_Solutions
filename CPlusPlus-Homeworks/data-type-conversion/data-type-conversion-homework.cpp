#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 1- Convert string St1 = "43.22" to float, double, integer.
    string St1 = "43.22";
    float stFloat = stof(St1);
    double stDouble = stod(St1);
    int stInt = stoi(St1);

    return 0;
}