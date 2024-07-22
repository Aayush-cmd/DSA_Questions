#include<iostream>
void swapalternate(int arr[],int size);
void printarray(int arr[],int size);

int main()
{
    int array[5]={1,2,3,4,5};
    int arra[6]={1,2,3,4,5,6};
    swapalternate( array, 5);
    printarray( array,5);

     swapalternate( arra, 6);
    printarray( arra,6);
 
}
void swapalternate(int arr[],int size)
{
    for(int i = 0 ;i<size;i+=2)
    {
        if(arr[i+1]<size)
        {
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i]= temp;
        
        }
    }

}
void printarray(int arr[],int size)
{
    for(int i = 0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<'\n';
}
