#ifndef INFORMATION_H
#define INFORMATION_H
#include"Balance.h"
#include<fstream>
#include<iostream>
using namespace std;




class Information:public Balance
{
private:
    enum {
     max=80
     };
     struct date {
      int day;
      int month;
      int year;
      };

  date p;
    char name[max];
      char pass[max];
    char user[max];
public:
    Information();
    virtual ~Information();
    void get_data();
    operator char*();
    void display();
    char* getpass();
    char* getuser();
    void diskin1(int);
    void diskout1();
    int diskcount1();
    void updatebalance(int pn);
    void removedata();
    void setbalance(float b,int pn);

};

#endif // INFORMATION_H
