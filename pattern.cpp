#include<iostream>
int main()
{
    int num;
    std::cin>>num;
    
    for(int i =1;i<=num;i++){
        for(int j=1;j<=num;j++)
        {
            char ch = 'A'+i+j-2;
            
            std::cout<<ch;
        }
        std::cout<<'\n';
    }
}