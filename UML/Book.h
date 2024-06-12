#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book{

    private:
    std::string title;
    std::string author;
    std::string ISBN;
    std::string publisher;

    public:
    Book(std::string title, std::string author, std::string ISBN, std::string publisher);
    
    std::string getTitle();
    std::string getAuthor();
    std::string getISBN();
    std::string getPublisher();

    void setTitle(std::string booktitle);
    void setAuthor(std::string bookAuthor);
    void setISBN(std::string bookISBN);
    void setPublisher(std::string bookPublisher);
    
};

#endif 