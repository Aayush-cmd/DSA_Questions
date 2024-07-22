#include<iostream>                          //conversion of binary to digit
#include<math.h>                  
int main()
{
    int ans=0;
    int i =0;
    int n;
    
    std::cin>>n;
    while(n!=0) 
    {
        int digit = n%10;
        if(digit==1){
            ans = ans+ pow(2,i) ;
        }

        n=n/10;
        i++;
        
         }
          std::cout<<"Answer is "<<ans<<'\n';  
}