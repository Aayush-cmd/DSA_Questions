#include<iostream>

void printArray(int arr[],int  size)
{
    for(int i =0;i<size;i++){
        std::cout<<arr[i];
    }
    std::cout<<'\n';
}

void sortArray(int arr[],int size)
{
    int left =0 ;
    int right =size-1;

    while(left<right && arr[left]==0){
        left++;

    }
    while(left<right && arr[right]==1){
        right--;
    }
    if(left<right){
        std::swap(arr[right],arr[left]);
        left++;
        right--;

    }
}

int main()
{
    int arr[6]={1,0,0,1,1,0};
    sortArray( arr, 6);
    printArray(arr,  6);

}