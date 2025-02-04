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

    // 3- Convert double N2 = 33.5 to string.

    double N2 = 33.5;
    string Str2 = to_string(N2);

    // 4- Convert float N3 = 55.23 to string and integer

    double N3 = 55.23;
    string Str3 = to_string(N3);
    int N4 = (int)N3;

    return 0;
}