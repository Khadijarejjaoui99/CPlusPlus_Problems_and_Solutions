#include <iostream>
using namespace std;

struct stBook
{
    string Title, Author;
};

void ReadBookData(stBook &Book)
{
    cout << "Please enter the book title:\n";
    cin >> Book.Title;
    cout << "Please enter the book author:\n";
    cin >> Book.Author;
}

void SwapBooks(stBook &Book1, stBook &Book2)
{
    stBook Temp;

    Temp = Book1;
    Book1 = Book2;
    Book2 = Temp;
}

void DisplayBookData(stBook Book)
{
    cout << "Book Title: " << Book.Title << endl;
    cout << "Book Author: " << Book.Author << endl;
}

void ReadBooks(stBook Books[2])
{
    ReadBookData(Books[0]);
    ReadBookData(Books[1]);
}
void PrintBooksBeforeAfterSwap(stBook Books[2])
{
    cout << "\n***********************\n";

    cout << "Books Before Swap:\n";
    cout << "Book1:\n";
    DisplayBookData(Books[0]);
    cout << "Book2:\n";
    DisplayBookData(Books[1]);

    cout << "***********************\n";

    SwapBooks(Books[0], Books[1]);

    cout << "Books After Swap:\n";
    cout << "Book1:\n";
    DisplayBookData(Books[0]);
    cout << "Book2:\n";
    DisplayBookData(Books[1]);
}
int main()
{
    stBook Books[2];
    ReadBooks(Books);
    PrintBooksBeforeAfterSwap(Books);
    return 0;
}