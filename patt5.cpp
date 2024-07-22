#include<iostream>
int main()

{
    int num ;
    int i=1;
    std::cin>>num;
    while(i<=num){
        int space = i-1;
        while(space){
            std::cout<<" ";
            space--;
        }
        int j=1;
        while(j<=num-i+1){
            std::cout<<'X';
            j++;
        }
        std::cout<<'\n';
        i++;
    }
}