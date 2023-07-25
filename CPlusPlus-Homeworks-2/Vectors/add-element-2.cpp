#include <iostream>
#include <vector>
using namespace std;

int ReadNumber()
{
    int Number;

    cout << "Please enter a number:\n";
    cin >> Number;

    return Number;
}

void ReadNumbers(vector<int> &vNumbers)
{
    char AddMore = 'Y';
    int Number = 0;

    do
    {
        Number = ReadNumber();

        vNumbers.push_back(Number);

        cout << "Do you want to eneter more numbers Y/N:\n";
        cin >> AddMore;

    } while (AddMore == 'y' || AddMore == 'Y');
}

void PrintNumbers(vector<int> vNumbers)
{
    for (int &Number : vNumbers)
        cout << Number << " ";

    cout << endl;
}

int main()
{
    vector<int> vNumbers;

    ReadNumbers(vNumbers);
    PrintNumbers(vNumbers);

    return 0;
}