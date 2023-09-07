#include <iostream>
#include <string>
using namespace std;

const int MAX_BOOKS = 100;

struct stBooksInfo
{
    string BookTitle, BookAuthor;
    int PublicationYear;
};

void ReadBookDetails(stBooksInfo &Book)
{
    cout << "Please Enter Book Title:\n";
    cin.ignore(1, '\n');
    getline(cin, Book.BookTitle);
    cout << "Please Enter Book Author:\n";
    getline(cin, Book.BookAuthor);
    cout << "Please Enter Publication Year:\n";
    cin >> Book.PublicationYear;
}

void PrintBookDetails(stBooksInfo Book)
{
    cout << "*********************************\n";
    cout << "Book Title: " << Book.BookTitle << endl;
    cout << "Book Author: " << Book.BookAuthor << endl;
    cout << "Book Publication Year: " << Book.PublicationYear << endl;
    cout << "*********************************\n";
}

void ReadBooksInfo(stBooksInfo Books[MAX_BOOKS], int &NumberOfBooks)
{
    cout << "Please enter number of books:\n";
    cin >> NumberOfBooks;

    for (int i = 0; i < NumberOfBooks; i++)
    {
        cout << "\nPlease Enter Book's " << i + 1 << " Info:\n";
        ReadBookDetails(Books[i]);
    }
}

void DisplayBooksInfo(stBooksInfo Books[MAX_BOOKS], int NumberOfBooks)
{
    cout << "\nBooks Catalog:\n";
    for (int i = 0; i < NumberOfBooks; i++)
    {
        cout << "\nBook " << i + 1 << " Info:\n";
        PrintBookDetails(Books[i]);
    }
}
int main()
{
    stBooksInfo Books[MAX_BOOKS];
    int NumberOfBooks;

    ReadBooksInfo(Books, NumberOfBooks);
    DisplayBooksInfo(Books, NumberOfBooks);

    return 0;
}