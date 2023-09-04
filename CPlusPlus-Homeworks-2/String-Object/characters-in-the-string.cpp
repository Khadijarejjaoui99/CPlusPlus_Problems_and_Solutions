#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S1 = "My Name is Khadija Rejjaoui";

    for (int i = 0; i < S1.length(); i++)
        cout << S1.at(i) << endl;

    return 0;
}