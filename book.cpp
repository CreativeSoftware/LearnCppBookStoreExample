#include "book.h"

Book::Book()
{
}

Book::Book(int barCode, std::string const &title, std::string const &author,
           std::string const &publisher, int year, float price,
           int noPages)
    :Product(barCode, title, author, publisher, year, price),
      d_noPages(noPages)
{}

int Book::noPages(void) const {
    return d_noPages;

}

void Book::setNoPages(int noPages)
{
    d_noPages = noPages;
}
