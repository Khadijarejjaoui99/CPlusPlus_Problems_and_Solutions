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
void PrintILoveProgramming()
{
    cout << "I love programming!\n\n";
    cout << "I promise to be the best developer ever!\n\n";
    cout << "I know it will take sometimes to practice, but I will acheive my goal.\n\n";
    cout << "Best regards,\n";
    cout << "Khadija Rejjaoui\n";
}
int main()
{
    DisplayMyInfoCard();
    PrintSquareStars();
    PrintILoveProgramming();
    return 0;
}