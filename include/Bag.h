#ifndef BAG_H
#define BAG_H
#include"Product.h"
#include<fstream>

#include<iostream>
using namespace std;

class Balance;
class Bag: public Product
{
      enum{
    max=80
    };
private:
    char category[max] ;
public:
    Bag();
    virtual ~Bag();

    void get_data();

    void display();
  float getprice();
    void diskin(int);
    void diskout();
    int diskcount();
    friend float frifunc2(Balance ,Bag  );
    void removedata();

};



#endif // BAG_H
