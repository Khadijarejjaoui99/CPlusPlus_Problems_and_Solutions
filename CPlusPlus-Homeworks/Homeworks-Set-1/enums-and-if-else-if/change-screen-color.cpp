#include <iostream>
using namespace std;

enum enScreenColors
{
    Blue = 1,
    Green = 2,
    Red = 3,
    Purple = 4,
    Yellow = 5
};

int main()
{
    int C;
    enScreenColors Color;
    cout << "***************************************\n";
    cout << "Please choose the number of your color:\n";
    cout << "(1) Blue\n";
    cout << "(2) Green\n";
    cout << "(3) Red\n";
    cout << "(4) Purple\n";
    cout << "(5) Yellow\n";
    cout << "***************************************\n";
    cout << "Your choice: ";
    cin >> C;

    Color = (enScreenColors)C;

    if (Color == enScreenColors::Blue)
        system("color 1F");
    else if (Color == enScreenColors::Green)
        system("color 2F");
    else if (Color == enScreenColors::Red)
        system("color 4F");
    else if (Color == enScreenColors::Purple)
        system("color 5F");
    else if (Color == enScreenColors::Yellow)
        system("color 6F");
    else
        cout << "You have entered wrong choice\n";

    return 0;
}