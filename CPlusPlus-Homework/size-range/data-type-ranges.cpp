#include <iostream>
#include <climits>
#include <cfloat>
using namespace std;

int main()
{
    cout << "char range :(" << CHAR_MIN << ", " << CHAR_MAX << ")\n";
    cout << "unsigned char range :(" << 0 << ", " << UCHAR_MAX << ")\n";

    cout << "int range: (" << INT_MIN << ", " << INT_MAX << ")\n";
    cout << "unsigned int range: (" << 0 << ", " << UINT_MAX << ")\n";
    cout << "long range: (" << LONG_MIN << ", " << LONG_MAX << ")\n";
    cout << "unsigned long range: (" << 0 << ", " << ULONG_MAX << ")\n";
    cout << "long long range: (" << LLONG_MIN << ", " << LLONG_MAX << ")\n";
    cout << "unsigned long long range: (" << 0 << ", " << ULLONG_MAX << ")\n";

    cout << "short range: (" << SHRT_MIN << ", " << SHRT_MAX << ")\n";
    cout << "unsigned short range: (" << 0 << ", " << USHRT_MAX << ")\n";

    cout << "float range: (" << FLT_MIN << ", " << FLT_MAX << ")\n";
    cout << "double range: (" << DBL_MIN << ", " << DBL_MAX << ")\n";
}