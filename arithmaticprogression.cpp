#include<iostream>

int arithmaticpro(int n)
{
  
    int ans = 3*n+7;
    return ans;

}
int main()
{
    int n ;
    std::cout<<"Enter the number:"<<'\n';
    std::cin>>n;
    int ans = arithmaticpro(n);
    std::cout<<"Answer is:"<<ans<<'\n';

}