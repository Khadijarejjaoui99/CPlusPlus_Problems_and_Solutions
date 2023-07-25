#include <iostream>
#include <vector>
using namespace std;

void PrintVector(vector<int> &vNumbers)
{
    for (int &Number : vNumbers)
    {
        cout << Number << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vNumbers1, vNumbers2;

    vNumbers1.push_back(12);
    vNumbers1.push_back(20);
    vNumbers1.push_back(11);
    vNumbers1.push_back(40);
    vNumbers1.push_back(15);

    cout << "vNumbers1 elements: ";
    PrintVector(vNumbers1);

    cout << "vNumbers1 size " << vNumbers1.size() << endl;

    vNumbers1.pop_back();
    vNumbers1.pop_back();

    cout << "vNumbers1 elements after pop() two times: ";
    PrintVector(vNumbers1);

    cout << "vNumbers1 size after pop() two times " << vNumbers1.size() << endl;

    vNumbers2.push_back(3);
    vNumbers2.push_back(1);
    vNumbers2.push_back(14);
    vNumbers2.push_back(4);
    vNumbers2.push_back(100);
    vNumbers2.push_back(200);

    cout << "\nvNumbers2 elements: ";
    PrintVector(vNumbers2);

    cout << "vNumbers2 size " << vNumbers2.size() << endl;

    vNumbers2.clear();

    cout << "vNumbers2 elements after clear(): ";
    PrintVector(vNumbers2);

    cout << "vNumbers2 size after clear(): " << vNumbers2.size() << endl;

    return 0;
}