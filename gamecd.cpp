#include "gamecd.h"

GameCD::GameCD()
{
}

GameCD::GameCD(int barCode, std::string const &title, std::string const &author,
               std::string const &publisher, int year, float price,
               std::string const &machine,int score)
    :Product(barCode, title, author, publisher, year, price),
     d_machine(machine), d_score(score)
{}

GameCD::~GameCD(){

}
//Acessor Functions
std::string const &GameCD::machine(void) const {
    return d_machine;
}
int GameCD::score(void) const{
    return d_score;
}

//Mutator
void GameCD::setMachine(std::string const &machine){
    d_machine=machine;
}

void GameCD::setScore(int score){
    d_score = score;
}

//void GameCD::setPrice(float price){
//    d_price = 50;
//}
