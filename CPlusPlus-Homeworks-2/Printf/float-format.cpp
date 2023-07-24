#include <iostream>
using namespace std;

int main()
{
    float a = 12.717;

    printf("Precision Specification: %.*f\n", 1, a);
    printf("Precision Specification: %.*f\n", 2, a);
    printf("Precision Specification: %.*f\n", 5, a);

    printf("Precision Specification: %.4f\n", a);
    printf("Precision Specification: %.5f\n", a);

    float b = 15.2, c = 2.71;

    printf("The float division of %.2f / %.2f = %.2f\n", b, c, b / c);

    double d = 12.7379;

    printf("The double value: %.3f\n", d);
    printf("The double value: %.10f\n", d);

    return 0;
}