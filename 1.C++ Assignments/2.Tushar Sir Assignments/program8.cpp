#include<iostream>
int main()
{
float basicSalary,salesAmount,netSalary;
do{
std::cout<<"\nEnter Basic salary and sales amount: ";
std::cin>>basicSalary>>salesAmount;
}while((basicSalary<0)||(salesAmount<0));
if((salesAmount>=5000)&&(salesAmount<=7500))
netSalary=1.03*basicSalary;
else if((salesAmount>=7501)&&(salesAmount<=10500))
netSalary=1.08*basicSalary;
else if((salesAmount>=10501)&&(salesAmount<=15000))
netSalary=1.11*basicSalary;
else if(salesAmount>=15000)
netSalary=1.15*basicSalary;
else
netSalary=basicSalary;
std::cout<<"\n Net Salary : "<<netSalary;
    return 0;
}