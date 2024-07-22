#include<iostream>
int sumarray(int arr[],int size);
int main()
{
    int size ;
    std::cin>>size;
    int array[10];
    for(int i = 0;i < size; i++){
        std::cin>> array[i];
    }
    std::cout<<sumarray(array,size)<<'\n';

}
int sumarray(int arr[],int size)
{
   int sum;
   for (int i = 0;i<size;i++){
    sum = sum+arr[i];                                               //to add all elements of aaray
   }
   return sum;
}