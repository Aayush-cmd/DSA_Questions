#include<iostream>
void printarray(int arr[],int size){
    std::cout<<"printing the array "<<'\n';
    for(int i =0;i<=size;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"Printing done"<<'\n';
}
int main()
{
    int array[5]={1,2,3,4,5};
        std::cout<<"Required array: ";
    
    printarray(array,4);

   
    
   
    }
