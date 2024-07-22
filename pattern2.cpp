#include <iostream>
int  main()
{
    int num ;
    std::cin>>num;
    int i =1;

    while(i<=num){
        int j=1;
        char start ='A'+num-i;
        while(j<=i){
            std::cout<<start;
            start++;
            j++;

        }
        std::cout<<'\n';
        i++;
    }
    return 0 ;
}