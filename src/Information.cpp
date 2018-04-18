#include "Information.h"
#include<fstream>
#include"Balance.h"
#include<iomanip>
#include<string.h>

#include<iostream>
using namespace std;

Information::Information():Balance()
{
         p.day=0;
        p.month=0;p.year=0;
         name[0]='\0';
         pass[0]='\0';
         user[0]='\0';

}

Information::~Information()
{
    //dtor
}



    void Information:: get_data()
    {
         cout<<"\tEnter name :";
         cin>>name;
         cout<<"\tBirth date:";
         cin>>p.day;
         cout<<"\tBirth month:";
         cin>>p.month;
         cout<<"\tBirth year:";
         cin>>p.year;

         cout<<endl<<"\tUser Name:";
         cin>>user;
         cout<<"\tPassword:";
         cin>>pass;
         Balance::get_data();
         cout<<endl;

    }
 Information::   operator char*()
    {
        return pass;
    }

    void Information:: display()
    {
        cout<<setw(12)<<"Name :"<<name<<endl<<setw(12)<<"birth date:"<<p.day<<"/"<<p.month<<"/"<<p.year<<endl

             <<setw(12)<<"User Name:"<<user<<endl;
             cout<<"Password:";

             int l;

             l=strlen(pass);
             for(int i=0;i<l;i++)
             {
                 cout<<"*";
             }
             cout<<endl;
             cout<<setw(12)<<"Current Balance:";
             Balance::display();

    }
   char*Information:: getpass()
   {
       return pass;
   }
   char*Information:: getuser()
   {
       return user;
   }


    void Information:: updatebalance(int pn)
    {
         fstream outfile;
    outfile.open("INFO.DAT",ios::app|ios::in|ios::out);
    cout<<"Update account::"<<endl;
    get_data();
    outfile.seekg(pn*sizeof(Information));
    outfile.write((char*)this,sizeof(*this));
    outfile.close();
    }

void Information::diskin1(int pn)
{
    ifstream infile;                 //read
    infile.open("INFO.DAT",ios::app|ios::in|ios::out);
    infile.seekg(pn*sizeof(Information));
    infile.read((char*)this,sizeof(*this));
}
void Information::diskout1()         //write file
{
    ofstream outfile;
    outfile.open("INFO.DAT",ios::app|ios::in|ios::out);
    outfile.write((char*)this,sizeof(*this));
    outfile.close();

}
int Information:: diskcount1()      //how many of informations
{
    ifstream infile;
    infile.open("INFO.DAT",ios::app|ios::in|ios::out);
    infile.seekg(0,ios::end);
    return (int)infile.tellg()/sizeof(Information);

}
void Information:: removedata()
{
    remove("INFO.DAT");

}
void Information::setbalance (float b,int pn)
{

    fstream outfile;

    outfile.open("INFO.DAT",ios::app|ios::in|ios::out);
    outfile.seekg(pn*sizeof(Information));
    Balance::setbal(b,outfile);

}
//void Information::setdata(ifstream &infile)
//{
   // infile>>name>>p.day>>p.month>>p.year>>user>>pass;
//}
