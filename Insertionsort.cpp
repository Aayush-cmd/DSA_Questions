#include<iostream>

void insertionSort(int arr[],int n)
{
    
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(j;j>=0;j--){
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];                                         //shifting
            }
            else{
                break;
            }
           
        }
        arr[j+1]=temp;
        
    }
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
  
    insertionSort( arr, 6);
    std::cout<<"Sorted array: ";
     printarray(arr, 6);
    return 0;
}