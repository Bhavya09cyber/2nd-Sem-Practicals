#include <iostream>
#include <string>
using namespace std;

class Library {
    int bookId[100];
    string title[100];
    string author[100];
    int copies[100];
    int count;

public:
    Library() {
        count = 0;
    }

    void addBook() {
        cout << "\nEnter Book ID: ";
        cin >> bookId[count];
        cin.ignore();

        cout << "Enter Title: ";
        getline(cin, title[count]);

        cout << "Enter Author: ";
        getline(cin, author[count]);

        cout << "Enter Available Copies: ";
        cin >> copies[count];

        count++;
        cout << "Book Added Successfully!\n";
    }

    void issueBook() {
        int id;
        cout << "\nEnter Book ID to Issue: ";
        cin >> id;

        for (int i = 0; i < count; i++) {
            if (bookId[i] == id) {
                if (copies[i] > 0) {
                    copies[i]--;
                    cout << "Book Issued Successfully!\n";
                } else {
                    cout << "No copies available!\n";
                }
                return;
            }
        }
        cout << "Book not found!\n";
    }

    void returnBook() {
        int id;
        cout << "\nEnter Book ID to Return: ";
        cin >> id;

        for (int i = 0; i < count; i++) {
            if (bookId[i] == id) {
                copies[i]++;
                cout << "Book Returned Successfully!\n";
                return;
            }
        }
        cout << "Book not found!\n";
    }

    void totalBooks() {
        cout << "\nTotal Books in Library: " << count << endl;
    }
};

int main() {
    Library lib;
    int choice;

    while (true) {
        cout << "\n--- Library Menu (Simple OOP) ---\n";
        cout << "1. Add Book\n";
        cout << "2. Issue Book\n";
        cout << "3. Return Book\n";
        cout << "4. Display Total Books\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) lib.addBook();
        else if (choice == 2) lib.issueBook();
        else if (choice == 3) lib.returnBook();
        else if (choice == 4) lib.totalBooks();
        else if (choice == 5) break;
        else cout << "Invalid choice!\n";
    }

    return 0;
}
