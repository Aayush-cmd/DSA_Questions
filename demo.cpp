#include<iostream>
int main()
{
    char ch;
    std::cout<<"Enter character of your choice:\n";
    std::cin>>ch;

    if(ch>='a' && ch<='z')
    {
        std::cout<<"it is in lowercase\n";
    }
     
      else if(ch>='A'&& ch<='Z')
    {
        std::cout<<"it is in uppercase\n";
    }

    else if(ch >='0' && ch<='9')
    {
        std::cout<<"its numeric\n";
    }

   
    return 0 ;

}