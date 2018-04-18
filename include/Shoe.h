#ifndef SHOE_H
#define SHOE_H
#include<iostream>
#include"Product.h"
#include<fstream>
using namespace std;

class Balance;
class Shoe:public Product
{
   enum {
     n=80
     };
        int p;
private:

    int size;
   char brand[n];

public:

    Shoe();
    virtual ~Shoe();
    void get_data();
     void display();
    float getprice();
    void diskin(int);
    void diskout();
     int diskcount();
    friend float frifunc1(Balance ,Shoe );
    void removedata();
};

#endif // SHOE_H
