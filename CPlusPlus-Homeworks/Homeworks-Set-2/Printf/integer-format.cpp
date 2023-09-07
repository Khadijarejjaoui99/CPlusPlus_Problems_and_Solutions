#include <iostream>
using namespace std;

int main()
{
    int Page = 20, TotalPages = 100;

    printf("The page number is: %d\n", Page);
    printf("You are in page %d of %d\n", Page, TotalPages);

    for (int i = 1; i <= 10; i++)
    {
        if (i <= 9)
            printf("%0*d\n", 2, i);
        else
            printf("%d\n", i);
    }

    int i = 2;

    int Num1 = 20, Num2 = 40;

    printf("%d + %d = %d\n", Num1, Num2, Num1 + Num2);

    return 0;
}