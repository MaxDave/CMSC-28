#include "Book.h"

// Constructor definition
Book::Book(std::string title, std::string author, std::string isbn) {
    this->title = title;
    this->author = author;
    this->isbn = isbn;
    // Optionally initialize publisher here if needed
}

// Getter method definitions
std::string Book::getTitle() {
    return title;
}

std::string Book::getAuthor() {
    return author;
}

std::string Book::getISBN() {
    return isbn;
}

std::string Book::getPublisher() {
    return publisher;
}

// Setter method definitions
void Book::setTitle(std::string bktitle) {
    title = bktitle;
}

void Book::setAuthor(std::string bkauthor) {
    author = bkauthor;
}

void Book::setISBN(std::string bkisbn) {
    isbn = bkisbn;
}

void Book::setPublisher(std::string bkpublisher) {
    publisher = bkpublisher;
}
