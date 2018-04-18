#ifndef PRODUCT_H
#define PRODUCT_H
#include<iostream>
using namespace std;


class Product
{
     enum {
     max=80
     };
protected:
    char quality[max];
    int batch_no;
    float price;
public:
    Product();
    virtual ~Product();

    void get_data();

    void display();

};

#endif // PRODUCT_H
