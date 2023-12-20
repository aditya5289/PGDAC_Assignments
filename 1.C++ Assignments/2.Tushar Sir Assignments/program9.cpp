 #include<iostream>
 int main()
 {  int n1,n2,result;
    int choice;
    do{
       std::cout<<"\n*************  Calculator *************";
       std::cout<<"\n1.Addition ";
       std::cout<<"\n2.Subtraction";
       std::cout<<"\n3.Multiplication ";
       std::cout<<"\n4.Division ";
       std::cout<<"\n0.Exit ";
       std::cout<<"\n\nEnter your choice :  ";
       std::cin>>choice;
       switch(choice){
       case 1:
       std::cout<<"\n Enter two numbers : ";
       std::cin>>n1>>n2;
       result=n1+n2;
       std::cout<<"\n Result : "<<result;
       break;
       case 2:
        std::cout<<"\n Enter two numbers : ";
       std::cin>>n1>>n2;
       result=n1-n2;
       std::cout<<"\n Result : "<<result;
       break;
       case 3:
        std::cout<<"\n Enter two numbers : ";
       std::cin>>n1>>n2;
       result=n1*n2;
       std::cout<<"\n Result : "<<result;
       break;
       case 4:
        std::cout<<"\n Enter two numbers : ";
       std::cin>>n1>>n2;
       result=n1/n2;
       std::cout<<"\n Result : "<<result;
       break;
       case 0:exit(0);
       default:std::cout<<"\nInvalid .Enter in range(0-4)";
       
       }
    

    }while(choice);






    return 0;
 }
 