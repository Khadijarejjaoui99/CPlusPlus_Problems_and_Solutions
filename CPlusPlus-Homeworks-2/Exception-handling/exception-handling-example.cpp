#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vNumbers = {1, 2, 3, 4, 5};
    // vNumbers.at(5); Throw exception

    try
    {
        vNumbers.at(5);
    }
    catch (...)
    {
        cout << "Out of Range\n";
    }
    return 0;
}