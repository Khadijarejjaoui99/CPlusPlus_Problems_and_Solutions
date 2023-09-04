#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S1 = "My Name is Khadija Rejjaoui";

    if (S1.find("Khadija") == S1.npos)
        cout << "Khadija Not Found\n";
    else
        cout << "Found at index " << S1.find("Khadija") << endl;

    if (S1.find("Amira") == S1.npos)
        cout << "Amira Not Found\n";
    else
        cout << S1.find("Amira") << endl;

    return 0;
}