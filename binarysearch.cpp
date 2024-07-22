#include<iostream>

int binarysearch(int arr[],int size , int key)
{
        int start =0;
        int end = size-1;
        int mid = (start+end)/2;

        while(start<=end){
            if(arr[mid]==key)
            {
               return mid;
            }
            if(arr[mid]<key){
                start = mid + 1;
                
            }
            else {
                end= mid -1;
               
            }
             mid = (start+end)/2;
        }
        return -1;

}
int main()
{
    int arr[8]={2,4,6,8,10,12,14,16};
    

    std::cout<<"Element 12 is found on index "<<binarysearch (arr, 8 , 12);
    return 0 ;
     

}