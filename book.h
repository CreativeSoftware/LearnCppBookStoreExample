#ifndef BOOK_H
#define BOOK_H

#include "product.h"

class Book: public Product
{
protected:
    int d_noPages;
    // I don't know yet how to use enumerators

public:
    Book();
    Book(int barCode, std::string const &title, std::string const &author,
         std::string const &publisher, int year, float price,
         int noPages);


    int noPages(void) const;

    void setNoPages(int noPages);


};

#endif // BOOK_H
