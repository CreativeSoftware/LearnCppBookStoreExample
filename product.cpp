#include "product.h"

//Default Constructor
Product::Product()
{
    d_barCode = 1111;
    d_year = 2000;
    d_price = 0.0;
}

//Overload Constructor
Product::Product(int barCode, std::string const &title, std::string const &author,
                 std::string const &publisher, int year, float price)
    :d_barCode(barCode), d_title(title), d_author(author),
      d_publisher(publisher), d_year(year), d_price(price)
{}


//Destructor
Product::~Product(){}

//Accessor Functions

int Product::barCode(void) const{
    return d_barCode;
}



std::string const &Product::title(void) const {

    return d_title;
}

std::string const &Product::author(void) const {

    return d_author;
}

std::string const &Product::publisher(void) const{

    return d_publisher;
}

int Product::year(void) const {

    return d_year;
}

float Product::price(void) const {
    return d_price;
}


// Mutator Functions

void Product::setAuthor(const std::string &author){
    d_author = author;
}

void Product::setBarCode(int barCode){
    d_barCode = barCode;
}

void Product::setPrice(float price){
    d_price = price;

}

void Product::setPublisher(const std::string &publisher){
    d_publisher = publisher;
}

void Product::setTitle(const std::string &title){
    d_title = title;
}

void Product::setYear(int year){
    d_year = year;
}

//void Product::printProductData(void) const{

//    std::cout << "Bar code: " << d_barCode << std::endl;
//    std::cout << "Title: " << d_title << std::endl;
//    std::cout << "Author: " << d_author << std::endl;
//    std::cout << "Publisher: " << d_publisher << std::endl;
//    std::cout << "Price: " << d_price << std::endl;
//    std::cout << "Year: " << d_year << std::endl;
//}
