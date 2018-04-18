#include "Shoe.h"
#include"Product.h"
#include<fstream>
#include<iomanip>
#include<string.h>
#include<iostream>
using namespace std;


 Shoe::Shoe():Product()
    {
        size=0;
        brand[0]='\0';

    }

Shoe::~Shoe()
{

}



    void Shoe:: get_data()
    {
        Product::get_data();
        cout<<"enter sizes available:";
        cin>>size;
        cout<<"enter brands available:";
        cin>>brand;

    }
    void Shoe:: display()
    {
        cout<<setw(16)<<"Brand:"<<brand<<endl<<setw(16)<<"sizes Available:"<<size;

        cout<<endl;
        Product::display();

    }
    float Shoe:: getprice()
    {
        return price;
    }



void Shoe::diskin(int pn)
{
    ifstream infile;
    infile.open("SHOE.DAT",ios::app|ios::in|ios::out);
    infile.seekg(pn*sizeof(Shoe));
    infile.read((char*)this,sizeof(*this));
}
void Shoe::diskout()
{
    ofstream outfile;
    outfile.open("SHOE.DAT",ios::app|ios::in|ios::out);
    outfile.write((char*)this,sizeof(*this));

}
int Shoe:: diskcount()
{
    ifstream infile;
    infile.open("SHOE.DAT",ios::app|ios::in|ios::out);
    infile.seekg(0,ios::end);
    return (int)infile.tellg()/sizeof(Shoe);

}
void Shoe:: removedata()
{
    remove("SHOE.DAT");

}
