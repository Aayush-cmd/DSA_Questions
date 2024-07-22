#include<iostream>
int main()

{

    int num;
    int i=2;
    std::cout<<"Enter any number:\n";
    std::cin>>num;
    while(i<num){
    if(num % 2 !=0)
    {
        std::cout<<"its not prime number for "<<i<<'\n';
    }
    else {
         std::cout<<"its  prime number for "<<i<<'\n';
    }
    i++;
    }
    return 0 ;
}