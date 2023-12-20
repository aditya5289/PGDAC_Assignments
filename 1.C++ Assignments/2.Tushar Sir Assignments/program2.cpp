#include<iostream>  //implicit and explixit type conversion
int main()
{
  int sub1,sub2,sub3,sub4,sub5;
  float avg;
  std::cout<<"\nEnter subject 1 marks : ";
  std::cin>>sub1;
  std::cout<<"\nEnter subject 2 marks : ";
  std::cin>>sub2;
  std::cout<<"\nEnter subject 3 marks : ";
  std::cin>>sub3;
  std::cout<<"\nEnter subject 4 marks : ";
  std::cin>>sub4;
  std::cout<<"\nEnter subject 5 marks : ";
  std::cin>>sub5;
  avg=(sub1+sub2+sub3+sub4+sub5)/5.0   //implcit type conversion
  avg= (int)avg;
  std::cout<<"Average is : "<<avg;




return 0;   
}