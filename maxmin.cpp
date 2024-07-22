#include<iostream>
using namespace std;

int getmax(int arr[],int n){
    int max =INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int getmin(int arr[],int n){
    int min =INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main()
{ int arr[5];
   int size;
   std::cin>>size;
   for(int i =0;i<size;i++){
    std::cin>>arr[i];
   }
   std::cout<<getmax( arr, size);
   std::cout<<getmin( arr, size);
}