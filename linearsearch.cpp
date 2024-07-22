#include<iostream>
int linearsearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
      
    }
  return -1;
}

int main()
{
    int key;
    int arr[5]={1,2,4,7,8};
    std::cout<<"enter element you want to search";
    std::cin>>key;
    int found =linearsearch( arr,5, key);

    if(found){
        std::cout<<"Element is found at index:"<< linearsearch( arr,5, key)<<'\n';
    }
    else{
         std::cout<<"Element is not found \n";
    }
}