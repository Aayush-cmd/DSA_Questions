#include<iostream>
int main()
{
    int num = 100;
    int a=0;
    int b=1;

    std::cout<<a<<" "<<b<<" ";

    for(int i =1 ; i<=num;i++){
        int nextNumber = a+b;
        std::cout<<nextNumber<<" ";

        a=b;
        b=nextNumber;
    }
    return 0 ;
}