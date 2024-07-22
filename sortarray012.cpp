#include<iostream>
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++){
        std::cout<<arr[i];
    }
    std::cout<<'\n';
}
void sort012(int *arr, int n)
{
   //   Write your code here
    int i = 0;
    int mid = 0;
    int k = n - 1;
    
    while ( mid<=k) {
        if(arr[mid] == 0) {
            std::swap(arr[i], arr[mid]);
            i++;
            mid++;
        }
       else if(arr[mid] == 1) {
            mid++;
        }
        else if(arr[mid] == 2) {
            std::swap(arr[mid], arr[k]);
            k--; 
        }
    }
}


int main()
{
    int arr[9]={0,1,2,1,0,2,2,0,1};
    sort012(arr, 9);
    printArray( arr, 9);
}