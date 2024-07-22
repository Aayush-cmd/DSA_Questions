#include<iostream>

bool isEven(int a );
int main()
{
    int num;
    std::cin>>num;

    if(isEven(num)){
        std::cout<<"It is even"<<'\n';

    }
    else{ 
        std::cout<<"It is odd"<<'\n';

    }

} 
bool isEven(int a )
{
    if(a&1){
        return 0;

    }
    return 1 ;
}