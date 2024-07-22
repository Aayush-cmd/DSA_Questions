#include <iostream>
int main()
{
    int a , b ;

    std::cout<<"Enter value of a\n";
    std::cin>> a;

    std::cout<<"Enter value of b\n";
    std::cin>> b;

    char op;

    std::cout<<"Enter the operation you want to perfom \n";
    std::cin>>op;

    switch (op){
         case '+' : std::cout<< "addition is"<< (a+b)<<'\n';
         break; 
         case '-' : std::cout<< "subs is"<< (a-b)<<'\n';
         break; 
         case '*' : std::cout<< "mult is"<< (a*b)<<'\n';
         break; 
         case '/' : std::cout<< "div is"<< (a/b)<<'\n';
         break; 
         case '%' : std::cout<< "mod is"<< (a%b)<<'\n';
         break; 
         default : std::cout<< "default case"<<'\n';
         break; 

    }


}