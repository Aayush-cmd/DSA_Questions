#include<iostream>

void ss(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex =j;

            }
            if(arr[i]!=minIndex)
            std::swap(arr[minIndex],arr[i]);
        }
    }
}

void print(int arr[],int n)

{
    for(int i=0;i<n;i++)
    {
        std::cout<<arr[i]<<" ";

    }
}

int main()
{
    int arr[6]={2,5,4,1,6,3};
    ss( arr, 6);
    std::cout<<"sorted array:";
    print( arr,6);

}