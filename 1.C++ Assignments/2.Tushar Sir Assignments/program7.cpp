#include<iostream>
int main()
{ int year;
//a. using if-else
   std::cout<<"\nEnter a year (YYYY) ";
   std::cin>>year;
   if(year%400==0)
   std::cout<<"\n leap year ";
   else if(year%100==0)
   std::cout<<"\n not a leap year ";
   else if(year%4==0)
    std::cout<<"\n leap year ";
   else
   std::cout<<"\n not a leap year";

//b.using conditional operators

   std::cout<<"\nEnter a year (YYYY) ";
   std::cin>>year;
   (year%400==0)?(std::cout<<"\n leap year "):((year%100==0)?(std::cout<<"\n leap year "):(year%4==0)?(std::cout<<"\n leap year "):(std::cout<<"\n not aleap year "));
 



    return 0;
}