#include<iostream>
int main()
{
int a=11,b=9;
//with third variable
int t;
t=a;
a=b;
b=t;
std::cout<<"\n After swap : "<<a<<" "<<b;
// without third variable
a=11,b=9;
a=a+b;
b=a-b;
a=a-b;
std::cout<<"\n After swap : "<<a<<" "<<b;
return 0;    
}