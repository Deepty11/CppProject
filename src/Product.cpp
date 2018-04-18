#include "Product.h"
#include<iomanip>
#include<iostream>
using namespace std;


Product::Product()
{
    quality[0]='\0';
        batch_no=0;
        price=0.00;

}

Product::~Product()
{
    //dtor
}


    void Product:: get_data()
    {
        cout<<"Enter quality:";
        cin>>quality;
        cout<<"Enter batch no:";
        cin>>batch_no;
        cout<<"Enter price Range:";
        cin>>price;

    }
    void Product:: display()
    {
        cout<<setw(16)<<"\t\tQuality:"<<quality<<endl
         <<setw(16)<<"\t\tBatch no:"<<batch_no<<endl<<setw(16)<<"\t\tPrice Range:"<<price<<endl;

    }
