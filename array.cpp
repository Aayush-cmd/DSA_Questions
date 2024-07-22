#include<iostream>                                //to fill all values of array with the same no. 
int main()
{
    int array [100];
    std::fill_n(array,100,2);

    for(int i= 1;i<=10;i++){
        std::cout<< " "<<array[i]<<" " ;
    }
}