#include <iostream>
using namespace std;

struct Student
{
    string name;
    short age;
    float GPA;
};

int main()
{
    Student student1, student2, student3;

    student1.name = "Amal Ahmadie";
    student1.age = 24;
    student1.GPA = 3.8;

    student2.name = "Mohammed Amin";
    student2.age = 25;
    student2.GPA = 3.5;

    student3.name = "Khalid Housam";
    student3.age = 24;
    student3.GPA = 3.9;

    cout << "*****************************\n";
    cout << "Student 1 Details:\n";
    cout << "Name: " << student1.name << "\n";
    cout << "Age: " << student1.age << " years old\n";
    cout << "GPA: " << student1.GPA << "\n";
    cout << "*****************************\n";
    cout << "Student 2 Details:\n";
    cout << "Name: " << student2.name << "\n";
    cout << "Age: " << student2.age << " years old\n";
    cout << "GPA: " << student2.GPA << "\n";
    cout << "*****************************\n";
    cout << "Student 3 Details:\n";
    cout << "Name: " << student3.name << "\n";
    cout << "Age: " << student3.age << " years old\n";
    cout << "GPA: " << student3.GPA << "\n";
    cout << "*****************************\n";
}