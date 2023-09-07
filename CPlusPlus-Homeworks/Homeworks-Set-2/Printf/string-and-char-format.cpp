#include <iostream>
using namespace std;

int main()
{
    char Name[] = "Khadija Rejjaoui";
    char WebSite[] = "Github.com";

    printf("Hello, %s, how are you?\n", Name);
    printf("Welcome to %s\n", WebSite);

    char c = 'S';

    printf("Character is %c\n", c);

    // set width:

    printf("%*c\n", 1, c);
    printf("%*c\n", 2, c);
    printf("%*c\n", 3, c);
    printf("%4c\n", c);

    return 0;
}