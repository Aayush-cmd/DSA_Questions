#include<iostream>
int main()
{
    int n ;
    std::cout<<"Enter a number\n";
    std::cin>>n;
    bool isPrime = 1;

    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime==0){
        std::cout<<"It is not prime number\n";
    }
    else {
        std::cout<<"It is  a prime number\n";
    }

}
