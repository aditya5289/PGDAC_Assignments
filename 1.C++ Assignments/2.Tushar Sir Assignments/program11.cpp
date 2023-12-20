#include<iostream>
int main()
{
char alphabet;
std::cout<<"\n Enter an alphabet : ";
std::cin>>alphabet;
if((alphabet>=65)&&(alphabet<=91))
{alphabet='a'+(alphabet-'A');
 std::cout<<"\nIn Opposite Case :"<<alphabet<<std::endl;
}
else if((alphabet>=97)&&(alphabet<=123))
{alphabet='A'+(alphabet-'a');
std::cout<<"\nIn Opposite Case :"<<alphabet<<std::endl;
}
else
std::cout<<"\nNot an alphabet ";


return 0;
}