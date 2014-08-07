#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>

class Product
{

protected:
    int d_barCode;
    std::string d_title;
    std::string d_author;
    std::string d_publisher;
    int d_year;
    float d_price;


public:

    //Default Constructor
    // Probably at this example it won't be used
    Product();

    Product(int barCode, std::string const &title, std::string const &author,
            std::string const &publisher, int year, float price);

    //Destructor
    ~Product();

    //Acessor Functions (Get Functions)
    // I ommit the "get", for convention

    int barCode(void) const;
    std::string const &title(void) const;
    std::string const &author(void) const;
    std::string const &publisher(void) const;
    int year(void) const;
    float price(void) const;


    //Mutator functions

    void setBarCode(int barCode);
    void setTitle(std::string const &title);
    void setAuthor(std::string const &author);
    void setPublisher(std::string const &publisher);
    void setYear(int year);
    void setPrice(float price);

//    void printProductData(void) const;



};

#endif // PRODUCT_H
