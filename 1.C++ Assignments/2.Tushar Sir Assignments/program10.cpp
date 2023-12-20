#include<iostream>
int main()
{
 int largest,n1,n2,n3;

 std::cout<<"\n Enter three numbers : ";
 std::cin>>n1>>n2>>n3;
largest=n1;
n2>largest?(largest=n2):largest=largest;
n3>largest?(largest=n3):largest=largest;
std::cout<<"\nLargest : "<<largest;


    return 0;
}