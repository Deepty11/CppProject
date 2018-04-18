#ifndef BALANCE_H
#define BALANCE_H

#include<iostream>
#include"Bag.h"
#include"Shoe.h"
#include"Product.h"
using namespace std;
class Balance
{
   protected:
    enum {
     max=80
     };
    float balance;
public:
    Balance( );
    virtual ~Balance();
  Balance(float f);

    void get_data();

    void display();

    float getbal();

    void setbal(float f, fstream &outfile);


    friend class Bag;
    friend class Shoe;
};

#endif // BALANCE_H
