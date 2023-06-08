#include <iostream>
using namespace std;

int main()
{
    cout << "12 >= 12 is " << (12 >= 12) << endl;
    cout << "12 > 7 is " << (12 > 7) << endl;
    cout << "8 < 6 is " << (8 < 6) << endl;
    cout << "8 = 6 is " << (8 == 6) << endl;
    cout << "12 <= 12 is " << (12 <= 12) << endl;
    cout << "7 = 5 is " << (7 == 5) << endl;

    cout << "NOT (12 >= 12) is " << !(12 >= 12) << endl;
    cout << "NOT (12 > 7) is " << !(12 > 7) << endl;
    cout << "NOT (8 < 6) is " << !(8 < 6) << endl;
    cout << "NOT (8 = 6) is " << !(8 == 6) << endl;
    cout << "NOT (12 <= 12) is " << !(12 <= 12) << endl;
    cout << "NOT (7 = 5) is " << !(7 == 5) << endl;

    cout << "1 AND 1 is " << (1 && 1) << endl;
    cout << "True AND 0 is " << (true && 0) << endl;
    cout << "0 OR 1 is " << (0 || 1) << endl;
    cout << "0 OR 0 is " << (0 || 0) << endl;
    cout << "NOT 0 is " << !0 << endl;
    cout << "NOT (1 OR 0) is " << !(1 || 0) << endl;

    cout << "(7 = 7) and (7 > 5) is " << ((7 == 7) && (7 > 5)) << endl;
    cout << "(7 = 7) and (7 < 5) is " << ((7 == 7) && (7 < 5)) << endl;
    cout << "(7 = 7) OR (7 < 5) is " << ((7 == 7) || (7 < 5)) << endl;
    cout << "(7 < 7) OR (7 > 5) is " << ((7 < 7) || (7 > 5)) << endl;
    cout << "NOT(7 = 7) and (7 > 5) is " << (!(7 == 7) && (7 > 5)) << endl;
    cout << "(7 = 7) and NOT(7 < 5) is " << ((7 == 7) && !(7 < 5)) << endl;
}