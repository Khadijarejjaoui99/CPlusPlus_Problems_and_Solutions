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

    // 2- Convert integer N1 = 20 to string.

    int N1 = 20;
    string Str1 = to_string(N1);

    return 0;
}