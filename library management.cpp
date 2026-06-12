#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int copies;

public:
    void inputDetails() {
        cout << "Enter book title: ";
        getline(cin, title);
        cout << "Enter author: ";
        getline(cin, author);
        cout << "Enter number of copies: ";
        cin >> copies;
        cin.ignore();
    }

    void borrowBook() {
        if (copies > 0) {
            copies--;
            cout << "Book borrowed successfully.\n";
        } else {
            cout << "No copies available.\n";
        }
    }

    void displayDetails() {
        cout << "\n--- Book Details ---\n";
        cout << "Title:   " << title << "\n";
        cout << "Author:  " << author << "\n";
        cout << "Copies:  " << copies << "\n";
    }
};

int main() {
    Book book;
    book.inputDetails();
    book.borrowBook();
    book.displayDetails();
    return 0;
}