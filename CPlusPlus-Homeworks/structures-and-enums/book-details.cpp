#include <iostream>
using namespace std;

struct Book
{
    string title, author;
    int publicationYear;
};
int main()
{
    Book book1, book2;

    book1.title = "The C Programming Language";
    book1.author = "Brian Kernighan, Dennis Ritchie";
    book1.publicationYear = 1978;

    book2.title = "Introduction to Algorithms";
    book2.author = "Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, Clifford Stein";
    book2.publicationYear = 1990;
    cout << "**************************************\n";
    cout << "Book 1: \n";
    cout << "Title: " << book1.title << "\n";
    cout << "Author(s): " << book1.author << "\n";
    cout << "Publication Year: " << book1.publicationYear << "\n";
    cout << "**************************************\n";
    cout << "Book 2: \n";
    cout << "Title: " << book2.title << "\n";
    cout << "Author(s): " << book2.author << "\n";
    cout << "Publication Year: " << book2.publicationYear << "\n";
    cout << "**************************************\n";

    return 0;
}