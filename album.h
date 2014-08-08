#ifndef ALBUM_H
#define ALBUM_H

#include "product.h"
#include "musiccd.h"

class Album: public Product
{
    std::vector < MusicCD >  d_myCds;


public:
    //Default Constructor
    Album();

    //Overload Constructor
    Album(int barCode, std::string const &title, std::string const &author,
          std::string const &publisher, int year,
          float price, std::vector <MusicCD> myCds);

    //Destructor
    ~Album();

    //Mutator Functions

    void addNewCd(std::vector <MusicCD> &);

};

#endif // ALBUM_H
