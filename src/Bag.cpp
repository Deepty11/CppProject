#include "Bag.h"
#include<iomanip>
#include"Product.h"
#include<fstream>
#include<iostream>
using namespace std;



Bag::~Bag()
{
    //dtor
}

Bag:: Bag():Product()
    {
      category[0]='\0';
    }
    void  Bag:: get_data()
    {
        Product::get_data();
        cout<<"Enter Category:";
        cin>>category;

    }
    void  Bag:: display()
    {
        Product::display();
        cout<<setw(16)<<"\t\tCategory:"<<category<<endl;

    }
    float  Bag:: getprice()
    {
        return price;
    }

void Bag::diskin(int pn)
{
    ifstream infile;
    infile.open("BAG.DAT",ios::app|ios::in|ios::out);
    infile.seekg(pn*sizeof(Bag));
    infile.read((char*)this,sizeof(*this));
}
void Bag::diskout()
{
    ofstream outfile;
    outfile.open("BAG.DAT",ios::app|ios::in|ios::out);
    outfile.write((char*)this,sizeof(*this));

}
int Bag:: diskcount()
{
    ifstream infile;
    infile.open("BAG.DAT",ios::app|ios::in|ios::out);
    infile.seekg(0,ios::end);
    return (int)infile.tellg()/sizeof(Bag);

}
void Bag:: removedata()
{
    remove("BAG.DAT");

}
