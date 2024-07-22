#include<iostream>
void bubbleSort(int arr[],int n)
{
    for(int i=1;i<n;i++)             //for round 1 to n-1
    {
        for(int j=0;j<n-i;j++)              //for 0th index to n-i th index so that last element of the array is also considered.
        {
            if(arr[j] > arr[j+1]){
                std::swap(arr[j],arr[j+1]);      
            }
            
        }
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        std::cout<<arr[i]<<" ";
      
    }
}
int main()
{
    int arr[6]={222,211,213,345,234,454};
    bubbleSort(arr, 6);                            //func calling.
    std::cout<<"Sorted Array: ";
    printArray( arr, 6);
    

}