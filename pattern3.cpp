#include <iostream>
int main()
{
    int i=1;
    int num;
    std::cin>>num;

    while(i<=num){
        int space = num-i;
        while(space){
        std::cout<<" ";
        space--;
        }
        int j=1;
        while(j<=i){
            std::cout<<'*';
            j++;
        }
        std::cout<<'\n';
        i++;
    }
}