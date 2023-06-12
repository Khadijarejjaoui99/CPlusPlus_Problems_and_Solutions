#include <iostream>
using namespace std;

void DisplayMyInfoCard()
{
    string Name = "Khadija Rejjaoui", City = "Eljadida", Country = "Morocco";
    short Age = 23;

    cout << "***********************************\n";
    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << endl;
    cout << "City: " << City << endl;
    cout << "Country: " << Country << endl;
    cout << "***********************************\n";
}
void PrintSquareStars()
{
    cout << "********\n";
    cout << "********\n";
    cout << "********\n";
    cout << "********\n";
}
int main()
{
    DisplayMyInfoCard();
    PrintSquareStars();
    return 0;
}