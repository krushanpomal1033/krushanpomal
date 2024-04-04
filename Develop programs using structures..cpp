#include <iostream>
#include <vector>
#include <algorithm>

struct Book {
    std::string title;
    std::string author;
    int publication_year;
};

void add_book(std::vector<Book>& library, const Book& new_book) {
    library.push_back(new_book);
}

bool update_book(std::vector<Book>& library, int index, const Book& updated_book) {
    if (index < 0 || index >= library.size()) {
        return false;
    }
    library[index] = updated_book;
    return true;
}

void print_library(const std::vector<Book>& library) {
    for (const auto& book : library) {
        std::cout << "Title: " << book.title << "\n";
        std::cout << "Author: " << book.author << "\n";
        std::cout << "Publication Year: " << book.publication_year << "\n";
        std::cout << "------------------------\n";
    }
}

int main() {
    std::vector<Book> library;

    // Add some initial books
    add_book(library, { "The Great Gatsby", "F. Scott Fitzgerald", 1925 });
    add_book(library, { "To Kill a Mockingbird", "Harper Lee", 1960 });
    add_book(library, { "Pride and Prejudice", "Jane Austen", 1813 });

    // Print the initial library
    std::cout << "Initial Library:\n";
    print_library(library);

    // Update a book
    update_book(library, 0, { "The Great Gatsby", "F. Scott Fitzgerald", 1925 });

    // Print the updated library
    std::cout << "\nUpdated Library:\n";
    print_library(library);

    return 0;
}