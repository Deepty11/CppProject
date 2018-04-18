#include "Balance.h"

Balance::Balance()
{
      balance=0.00;
}

Balance::~Balance()
{

}


 Balance:: Balance(float f)
    {
        balance= f;

    }
    void Balance:: get_data()
    {
        cout<<"\tYour balance:";
        cin>>balance;

    }
    void Balance:: display()
    {
        cout<<balance;

    }
    float Balance:: getbal()
    {
        return balance;
    }
      void Balance:: setbal(float f,fstream &outfile)
    {
          balance=f;

        outfile<<balance;

    }


