#include <iostream>
using namespace std;

struct Car
{
    string brand, model;
    int year;
};

struct Person
{
    string name;
    short age;
    Car car;
};

int main()
{
    Person person1;

    person1.name = "Jamila Halim";
    person1.age = 35;
    person1.car.brand = "BMW";
    person1.car.model = "X5";
    person1.car.year = 2020;

    cout << "*************************************\n";
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Car Brand: " << person1.car.brand << endl;
    cout << "Car Model: " << person1.car.model << endl;
    cout << "Car Year: " << person1.car.year << endl;
    cout << "*************************************\n";
}