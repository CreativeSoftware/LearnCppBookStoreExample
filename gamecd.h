#ifndef GAMECD_H
#define GAMECD_H

#include "product.h"

class GameCD: public Product
{
    std::string d_machine;
    int d_score;
public:
    //default constructor
    GameCD();

    //overload constructor
    GameCD(int barCode, std::string const &title, std::string const &author,
           std::string const &publisher, int year, float price,std::string const &machine,
           int score);

    ~GameCD();
    //Acessor Functions
    std::string const &machine(void) const;
    int score(void) const;

    //Mutator functions
    void setMachine(std::string const &machine);
    void setScore(int score);


};

#endif // GAMECD_H
