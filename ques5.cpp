#include<iostream>
int main ()
{
    int amount;
    int Rs100,Rs50,Rs20,Rs1;
    std::cout<<"Enter total amount\n";
    std::cin>>amount;
    

    switch(1)
    {
        case 1:
        Rs100 = amount/100;
        amount = amount%100;
        std::cout<<"Number of Rs100 note"<<Rs100<<'\n';
        
           case 2:
        Rs50 = amount/50;
        amount = amount%50;
         std::cout<<"Number of Rs50 note"<<Rs50<<'\n';
        
           case 3:
        Rs20 = amount/20;
        amount = amount%20;
         std::cout<<"Number of Rs20 note"<<Rs20<<'\n';
        
           case 4:
        Rs1 = amount/1;
        amount = amount%1;
         std::cout<<"Number of Rs1 note"<<Rs1<<'\n';
        break;
         
    }

   
}
