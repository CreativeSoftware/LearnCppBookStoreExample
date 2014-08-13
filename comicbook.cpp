#include "comicbook.h"

ComicBook::ComicBook()
{
}

ComicBook::ComicBook(int barCode, std::string const &title, std::string const &author,
                     std::string const &publisher, int year, float price,
                     int noPages, std::string creator, std::string universe)
    :Book(barCode, title, author,publisher, year, price, noPages),
    d_creator(creator), d_universe(universe)
{}


std::string const &ComicBook::creator(void) const{

    return d_creator;
}

std::string const &ComicBook::universe(void) const {
    return d_universe;
}

void ComicBook::setCreator(const std::string &creator){
    d_creator = creator;
}

void ComicBook::setUniverse(const std::string &universe){
    d_universe = universe;
}
