#include <iostream>
using namespace std;

int PowerOfM(int Num, int M)
{
    int P = 1;
    if (M > 0)
    {
        P = Num * PowerOfM(Num, M - 1);
    }

    return P;
}

int main()
{
    cout << "2^3 = " << PowerOfM(2, 3) << endl;
    cout << "4^2 = " << PowerOfM(4, 2) << endl;
    cout << "10^2 = " << PowerOfM(10, 2) << endl;

    return 0;
}