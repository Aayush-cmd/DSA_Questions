#include<iostream>
int fibb(int n=10)
{
    int a =0;
    int b=1;
    
  
  for(int i=1;i<n;i++){
     int nextnumber= a+b;
    a=b;
    b=nextnumber;
  }
return b;
}
int main()
{
    int n ;
    std::cin>>n;
    std::cout<<"nth term of the fibb series is :"<<fibb(n);
    return 0;
    } 
