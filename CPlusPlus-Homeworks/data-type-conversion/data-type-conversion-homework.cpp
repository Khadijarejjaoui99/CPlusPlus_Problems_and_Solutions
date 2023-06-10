#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main()
{
    // 1- Convert string St1 = "43.22" to float, double, integer.
    string St1 = "43.22";
    float stFloat = stof(St1);
    double stDouble = stod(St1);
    int stInt = stoi(St1);

    cout << "type of stFloat is: " << typeid(stFloat).name() << endl;
    cout << "type of stDouble is: " << typeid(stDouble).name() << endl;
    cout << "type of stInt is: " << typeid(stInt).name() << endl;

    return 0;
}