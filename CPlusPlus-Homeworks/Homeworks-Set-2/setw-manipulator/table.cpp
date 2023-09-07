#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "|---------|" << "--------------------------------|" << "---------|\n";
    cout << "|  Code   |" << "              Name              |" << "   Mark  |\n";
    cout << "|---------|" << "--------------------------------|" << "---------|\n";
    cout << "|" << setw(9) << "C101" << "|" << setw(32) << "Introduction to programming 1" << "|" << setw(9) << "95" << "|\n";
    cout << "|" << setw(9) << "C102" << "|" << setw(32) << "Computer Hardware" << "|" << setw(9) << "88" << "|\n";
    cout << "|" << setw(9) << "C10352" << "|" << setw(32) << "Network" << "|" << setw(9) << "75" << "|\n";
    cout << "|" << "---------|" << "--------------------------------|" << "---------|\n";

    return 0;
}
