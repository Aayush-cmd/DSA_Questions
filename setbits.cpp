#include<iostream>       //to count the number of set bits in a and b;

int setBitsA(int a)
{
    int count=0;
    while(a!=0){
    if (a&1){
        count ++;
    }
    a = a>>1;
  
    } 
     return count;
}
    int setBitsB(int b)
     
{ 
    int count=0;
    while(b!=0){
    if (b&1){
        count ++;
    }
    b =b>>1;
  
    }
     return count;

}
    int main()
{ 
     int a,b;
    std::cin>>a>>b;
    int ans1 = setBitsA(a);
     int ans2 = setBitsB(b);
     int ans = ans1+ans2;
     std::cout<<"Answer is "<<ans<<'\n';
     return 0 ;
 

}