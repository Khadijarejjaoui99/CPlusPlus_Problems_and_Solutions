#include <iostream>
using namespace std;

int main()
{
    bool Result;
    Result = (5 > 6 && 7 == 7) || (1 || 0);
    cout << "(5 > 6 and 7 == 7) OR (1 OR 0) is " << Result << endl;

    Result = !(5 > 6 && 7 == 7) || (1 || 0);
    cout << "NOT(5 > 6 and 7 = 7) OR (1 OR 0) is " << Result << endl;

    Result = !(5 > 6 && 7 == 7) || !(1 || 0);
    cout << "NOT(5 > 6 and 7 = 7) OR NOT(1 OR 0) is " << Result << endl;

    Result = !(5 > 6 && 7 == 7) && !(1 || 0);
    cout << "NOT(5 > 6 and 7 = 7) AND NOT(1 OR 0) is " << Result << endl;

    Result = ((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) && true;
    cout << "((5 > 6 AND 7 <= 8) OR (8 > 1 and 4 <= 3)) AND True is " << Result << endl;

    Result = ((5 > 6 && !(7 <= 8)) && (8 > 1 || 4 <= 3)) || true;
    cout << "((5 > 6 AND NOT(7 <= 8)) AND (8 > 1 OR 4 <= 3)) OR True is " << Result << endl;

    return 0;
}