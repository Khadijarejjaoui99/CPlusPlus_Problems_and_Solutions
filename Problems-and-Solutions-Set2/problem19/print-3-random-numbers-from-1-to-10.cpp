#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int PrintRandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

int main()
{
    srand((unsigned)time(NULL));
    cout << PrintRandomNumber(1, 10) << endl;
    cout << PrintRandomNumber(1, 10) << endl;
    cout << PrintRandomNumber(1, 10) << endl;
    return 0;
}