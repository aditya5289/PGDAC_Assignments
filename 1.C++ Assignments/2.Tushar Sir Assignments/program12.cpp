#include <iostream>  
using namespace std;  
int main()  
{  
int n,sum=0,d;    
cout<<"Enter a number: ";  
cin>>n;  
int numCopy=n;  
  while(n!=0)    
  {    
     d=n%10;      
     sum=sum+(d*d*d);  
     n/=10;    
  }
  if(numCopy==rev){
    cout<<"armstrong";
  } 

  else{
 cout<<"no armstrong"<<endl;
 }   
return 0;  
}  