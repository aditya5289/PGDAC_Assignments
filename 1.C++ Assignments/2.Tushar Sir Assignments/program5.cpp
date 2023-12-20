#include<iostream>
int main()
{
float basic,netSalary,grossSalary;
std::cout<<"\nEnter Basic salary : ";
std::cin>>basic;
grossSalary=basic+0.15*basic+0.30*basic;
netSalary=grossSalary-(0.125)*grossSalary;
std::cout<<"\n Net Salary : "<<netSalary;
    return 0;
}