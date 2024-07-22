#include<iostream>
void reverse(int arr[] , int size)
{
    int start = 0;
    int end = size-1;

    while(start<=end){
        std::swap(arr[start],arr[end]);
        start ++;
        end --;
    }

}
void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
        
    }
    std::cout<<'\n';
}

int main()

{

    int arr[5]={1,2,3,4,5};
    int brr[7]={3,2,7,9,5,3,6};
    reverse(arr,5);
    reverse(brr,7);

    printarray(arr,5);
    printarray(brr,7);

}