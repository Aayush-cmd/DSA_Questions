#include<iostream>
bool poweroftwo(int n)
{
    int num;
    if(n==0){
        std::cout<<"number is 0\n";
            return 0 ;
    }
    for(int i =0;i<n;i++)
    {
        if(n%2 !=0){
           
            return 0 ;
        }   
        n= n/2;

    }
       return 1;
    
}

int main()
{
    int n;
    std::cin>>n;

   bool power = poweroftwo(n);
   if(power)
   {
    std::cout<<"number is  a power of 2\n";
   }
   else {
    std::cout<<"number is not a power of 2\n";
   }
   return 0;
  
    
}