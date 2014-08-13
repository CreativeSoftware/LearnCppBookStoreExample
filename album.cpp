#include "album.h"

Album::Album()
{
}

Album::Album(int barCode, std::string const &title, std::string const &author,
             std::string const &publisher, int year,
             float price,std::vector <MusicCD> myCds)
    :Product(barCode, title, author, publisher, year, price),
      d_myCds(std::move(myCds))
{}

Album::~Album(){}

void Album::addNewCd(std::vector<MusicCD> & myCds){

    int noCds;

    std::cout << "how many Cds has this album ? " << "\n";
    std::cin >> noCds;

    for (int i=0; i<= noCds; i++){

        std::cout << "Insert the data of CD no " << i << "\n";



    }

}
