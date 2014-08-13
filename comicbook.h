#ifndef COMICBOOK_H
#define COMICBOOK_H

#include "book.h"

class ComicBook: public Book
{
    std::string d_creator;
    std::string d_universe;

public:
    ComicBook();
    ComicBook(int barCode, std::string const &title, std::string const &author,
              std::string const &publisher, int year, float price,
              int noPages, std::string creator, std::string universe);

    std::string const &creator(void) const;
    std::string const &universe(void) const;

    void setCreator(std::string const &creator);
    void setUniverse(std::string const &universe);


};

#endif // COMICBOOK_H
