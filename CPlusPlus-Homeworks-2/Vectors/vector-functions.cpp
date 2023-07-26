#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vNumbers = {11, 2, 3, 10, 33, 10, 8};

    cout << "First Number: " << vNumbers.front() << endl;
    cout << "Last Number: " << vNumbers.back() << endl;

    cout << "vector size: " << vNumbers.size() << endl;
    cout << "vector capacity: " << vNumbers.capacity() << endl;

    cout << "Empty(1) or Not Empty(0): " << vNumbers.empty() << endl;

    return 0;
}