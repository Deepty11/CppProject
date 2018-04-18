#include <iostream>
#include "Balance.h"
#include "Product.h"
#include "Bag.h"
#include "Shoe.h"
#include "Information.h"
#include"Admin.h"
#include<string.h>
#include<iomanip>
#define Max 80
#include<fstream>
using namespace std;
 float frifunc1(Balance a,Shoe b)
     {
         return a.getbal()-b.getprice();
     }
 float frifunc2(Balance a,Bag b)
    {
        return a.getbal()-b.getprice();
    }

int main()
{

   char cs,p;
     Balance d;
     Information e1;
     Bag bag;
     Shoe shoe;
     fstream infile1,infile2;
     int m=0,g=0,set1,set2;
     char nm[Max],ps[Max];
     Admin x;



     menuOption:
     cout<<"======================================================================================================"<<endl;
     cout<<"                                    WELCOME TO E-SHOP                                                       "<<endl;
     cout<<"======================================================================================================"<<endl<<endl<<endl;
     cout<<"\tWho are you?(1/2):"<<endl<<"\t1.ADMIN"<<endl<<"\t2.USER"<<endl<<"\t3.Exit"<<endl;
     int a;
     cin>>a;
     if(a==1)
     {
             while(1){
                    admin:
                    cout<<"Verification::"<<endl;
                    cout<<"\t\tUser name::";
                    cin>>nm;
                    cout<<"\t\tPassword::";
                    cin>>ps;
                    int z;
                    z=strcmp(x.getname(),nm);
                    int s;
                    s=strcmp(x.getpass(),ps);
                    if(z==0 && s==0)
                    {
                        cout<<endl<<"\t Congratulation ! Your account has been verified successfully !"<<endl;
                    }
                    else{
                        cout<<"\t Wrong user name or password ! Try again!"<<endl;
                        goto admin;
                    }

                 menu:
                cout<<"\tOPTIONS:"<<endl<<"\t1.Add Products"<<endl<<"\t2.Show available products."<<endl<<"\t3. Check users informations."
                    <<endl<<"\t4.Exit"<<endl;
            int ch;
            cin>>ch;
            if(ch==1)
            {

            do{

               cout<<"bags or shoes?(b/s)"<<endl;
               char c;
               cin>>c;
               if(c=='b')
               {
                  cout<<"Enter Data for  Bags:"<<endl;
                  bag.get_data();
                  bag.diskout();


               }
               else if(c=='s')
               {
                     cout<<"Enter Data for  Shoes:"<<endl;
                  shoe.get_data();
                  shoe.diskout();
               }
               cout<<"Add another?(y/n)"<<endl;
               cin>>cs;
                } while(cs=='y');

             goto menu;
}
            else if(ch==2)
            {

               cout<<"\tShoe or Bag?(b/s)"<<endl;
               char c;
               cin>>c;
               if(c=='b')
               {
                    int n1=bag.diskcount();
                    if(n1==0){
                        cout<<"Empty!!"<<endl;
                        goto menu;

                    }
                    else{
                            cout<<endl;
                    cout<<"***********************************************************************"<<endl;
                        cout<<"There are "<<n1<<" bags available"<<endl;
                    for(int i=0;i<n1;i++)
                    {
                        cout<<"Bags:"<<i+1<<endl;
                        bag.diskin(i);
                        bag.display();
                        cout<<endl;
                    }
                     cout<<"***********************************************************************"<<endl;
                     goto menu;
                    }

               }
               else if(c=='s'){

                     int n2=shoe.diskcount();
                     if(n2==0)
                     {
                         cout<<"Empty!!"<<endl;
                         goto menu;

                     }
                     else{
                     cout<<endl;
                     cout<<"***********************************************************************"<<endl;
                          cout<<"There are "<<n2<<" shoes available"<<endl;
                    for(int i=0;i<n2;i++)
                    {
                        cout<<"Shoes:"<<i+1<<endl;
                        shoe.diskin(i);
                        shoe.display();
                        cout<<endl;
                    }
                      cout<<"***********************************************************************"<<endl;
                      goto menu;
                     }

               }

            }
            else if(ch==3)
            {
              int n3=e1.diskcount1();
              if(n3==0)
              {
                  cout<<"Empty!!"<<endl;
                  goto menu;
              }
              else{
                cout<<endl;
                cout<<"***********************************************************************"<<endl;
                cout<<"\tThere are "<<n3<<" user account"<<endl;
              for(int i=0;i<n3;i++)
              {
                  cout<<"\tUsers::"<<i+1<<endl;
                  e1.diskin1(i);
                  e1.display();
                  cout<<endl;
              }
                cout<<"***********************************************************************"<<endl;
                 goto menu;
              }


            }
            else{
                goto menuOption;
            }
         }
     }
     else if(a==2)
     {
        log:
         cout<<"\tYOu must log in first!"<<endl;
         cout<<"\tNew in this site?(y/n)"<<endl;
         cin>>cs;
         if(cs=='y'){

            cout<<"\tYou need to register First!"<<endl<<"\tRegister?(y/n)"<<endl;
            char p;
            cin>>p;
            if(p=='y')
               {
                   cout<<endl;
                    cout<<"***********************************************************************"<<endl;
                    cout<<"\tUSER INFORMATION:"<<endl;
                    e1.get_data();
                    e1.diskout1();
                    cout<<"***********************************************************************"<<endl;
                    cout<<endl;
                    goto log;
               }
               else if(p=='n')
               {
                   goto log;
               }
         }
         else{
                bar:
                char u[Max],p[Max];
                cout<<"\tUSER LOGIN:"<<endl;
                 cout<<"\t\tuser name:";
                 cin>>u;
                 cout<<"\t\tPassword:";
                 cin>>p;
                 int n;
                 n=e1.diskcount1();
                 if(n==0){
                    cout<<"There is no account with this name & password!"<<endl;
                    goto bar;
                 }
                 else{
                     for(int i=0;i<n;i++)
                 {
                     e1.diskin1(i);
                     m=strcmp((e1.getuser()),u);
                     if(m==0)
                     {
                         int k;
                         k=strcmp((e1.getpass()),p);
                         if(k==0){
                            cout<<"Congratulation! You are logged in! "<<endl;
                            g=i;
                            break;
                         }
                     }

                 }
                 if(m==1 || m==-1)
                 {
                     cout<<"Try again!"<<endl;
                     goto bar;
                 }

                 }
                 cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;

         }
         start:
             int q;
         cout<<endl;
          cout<<"\tOPTIONS::"<<endl;
         cout<<"\t1.check the available products"<<endl<<"\t2.check my account"<<endl<<"\t3.Exit"<<endl;
         cin>>q;
         if(q==1)
         {
             cout<<"\tWhich product?(1/2)"<<endl<<"\t\t1.Shoes"<<endl<<"\t\t2.Bags"<<endl;
             int k;
             cin>>k;
             if(k==1){
               int n;
               n=shoe.diskcount();
               if(n==0)
               {
                   cout<<"there is nothing to show!!"<<endl;
                   goto start;
               }
               else{
               cout<<endl;
               cout<<"************************************************************************************"<<endl;
                cout<<"\tThere are "<<n<<" shoes available in this site !"<<endl;
               for(int i=0;i<n;i++)
               {
                    cout<<"Shoes::"<<i+1<<endl;
                   shoe.diskin(i);
                   shoe.display();
                   cout<<endl;

               }
                 cout<<"***********************************************************************************"<<endl;
               }

               cout<<"\tAdd to cart?(y/n)"<<endl;
               cin>>p;
               if(p=='y')
               {
                 cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
                   cout<<"\tEnter number:"<<"(from 1 to "<<n<<")"<<endl;
                   int a;
                   cin>>a;
                   cout<<"\tDetails of the product:"<<endl;
                   shoe.diskin(a);
                   shoe.display();
                   cout<<"\tYour previous balance:"<<e1.getbal()<<endl;
                   e1.diskin1(g);
                   shoe.diskin(a-1);
                   set1=frifunc1(e1,shoe);
                   cout<<"\tAfter deducing , your current balance:"<<set1<<"TK"<<endl;
                    e1.diskin1(g);
                   e1.setbalance(set1,g);
                   //e1.setbal(set1);


               }
               else{
                     goto start;
               }
             }
             else if(k==2){
                  int d;
               d=bag.diskcount();
               if(d==0)
               {
                   cout<<"There is nothing to show!!"<<endl;
                   goto start;
               }
               else{
                    cout<<endl;
                 cout<<"\tThere are "<<d<<" bags available in this site !"<<endl;
               for(int i=0;i<d;i++)
               {
                   cout<<"Bags::"<<i+1<<endl;
                  bag.diskin(i);
                   bag.display();
                   cout<<endl;

               }
               }

               cout<<"\tAdd to cart?(y/n)"<<endl;
               cin>>p;
               if(p=='y')
               {
                   cout<<"\tEnter number:"<<"(from 1 to "<<d<<")"<<endl;
                   int a;
                   cin>>a;
                   cout<<"\tDetails of the product:"<<endl;
                   bag.diskin(a-1);
                   bag.display();
                   cout<<"\tYour previous balance:"<<e1.getbal()<<endl;
                   e1.diskin1(g);
                   bag.diskin(a);
                   set2=frifunc2(e1,bag);
                   cout<<"\t After deducing ,your current balance:"<<set2<<"TK"<<endl;
                    e1.diskin1(g);
                   e1.setbalance(set2,g);
                   //e1.updatebalance(g);

               }
               else{
                     goto start;
               }
             }
             cout<<"\tTry more?(y/n)"<<endl;
             char l;
             cin>>l;
             if(l=='y')
             {
                 goto start;
             }
             else{
                cout<<"***********************************************************"<<endl;
                cout<<"\tThanks for visiting us!"<<endl<<"\tCome back soon!"<<endl;
                cout<<"***********************************************************"<<endl;
             }
         }
         else if(q==2)
         {
             e1.diskin1(g);
             e1.display();
             goto start;
         }
         else{
            goto menuOption;
         }
     }

    return 0;
}
