#ifndef ADMIN_H
#define ADMIN_H
#define nn 80
#include<iostream>
using namespace std;
#include "Admin.h"


class Admin
{
    public:
        Admin();
        virtual ~Admin();
        char* getname();
        char*getpass();


    private:
        char name[nn];
        char pass_word[nn];
};

#endif // ADMIN_H
