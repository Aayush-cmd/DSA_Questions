#include<iostream>         //to convert digit to binary
#include<math.h>
int main()
{
    int n;
    std::cin>>n;
    int i = 0;
    int ans = 0;
    while(n!=0)
    {
        int bits = n&1;
        ans = (bits*pow(10,i))+ans;                  //formula to reverse the decimal
        n=n>>1;
        i++;
        

    }
    std::cout<<"Answer is "<<ans<<'\n';
}