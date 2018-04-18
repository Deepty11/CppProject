#include "Admin.h"
#include<string.h>

Admin::Admin()
{
    strcpy(name,"deepty");
    strcpy(pass_word,"deepty");
//   name[nn]="Deepty";
  // pass_word[nn]="Deepty";
}

Admin::~Admin()
{

}
 char* Admin::getname()
 {
     return name;
 }
 char* Admin::getpass()
 {
     return pass_word;

 }
