#include<iostream>
void insertionsort(int arr[],int n)
{
    int i =1;
    int j;
     int temp =arr[i];
    while(i<n){
    i=i+1;
    temp =arr[i];
   
    int j =i-1;

    while(arr[j]>temp && j>=0)
    {
        arr[j]>temp;
            arr[j]=arr[j+1];
            j--;
        }
        
    
    }
    arr[j+1]=temp;
}

void printarray(int arr[],int n)
{
    for(int i =0;i<n;i++){
        std::cout<<arr[i]<<" ";
     
    }
}
int main()
{
    int arr[6]={2,5,1,4,3,6};
  
    insertionsort( arr, 6);
    std::cout<<"Sorted array: ";
     printarray(arr, 6);
    return 0;
}









