#include <iostream>
using namespace std;

enum enFruitNames
{
    Apple = 1,
    banana = 2,
    Orange = 3,
    Greape = 4,
    Strawberry = 5,
    Blueberry = 6,
    Watermelon = 7,
    Mango = 8
};

enFruitNames ReadFruitNumber()
{
    int Fruit;
    cout << "Please enter the fruit number:\n";
    cout << "(1) Apple\n";
    cout << "(2) banana\n";
    cout << "(3) Orange \n";
    cout << "(4) Greape \n";
    cout << "(5) Strawberry\n";
    cout << "(6) Blueberry\n";
    cout << "(7) Watermelon\n";
    cout << "(8) Mango\n";
    cout << "Your Choice: ";
    cin >> Fruit;

    return (enFruitNames)Fruit;
}

string FruitColor(enFruitNames FruitName)
{
    switch (FruitName)
    {
    case enFruitNames::Apple:
        return "Red, Green, Yellow";
        break;
    case enFruitNames::banana:
        return "Yellow";
        break;
    case enFruitNames::Orange:
        return "Orange";
        break;
    case enFruitNames::Greape:
        return "Purple, Green";
        break;
    case enFruitNames::Strawberry:
        return "Red";
        break;
    case enFruitNames::Blueberry:
        return "Blue";
        break;
    case enFruitNames::Watermelon:
        return "Green";
        break;
    case enFruitNames::Mango:
        return "Green";
        break;
    default:
        return "Invalid Choice!";
    }
}
void PrintFruitColor(string Color)
{
    cout << Color << endl;
}
int main()
{
    PrintFruitColor(FruitColor(ReadFruitNumber()));

    return 0;
}