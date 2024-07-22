#include<iostream>                         //to find the first occurance and last occurance of an element of the array and return their index

int firstOccurance(int arr[],int n ,int key)
{
    int start =0;
    int end =n-1;
    int ans;
    int mid = (start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid]>key){
            end = mid -1;
        }
        else if(arr[mid]<key){
            start =mid +1;
        }
        mid = (start+end)/2;
    }
    return ans;

}
    int lastOccurance(int arr[],int n ,int key)
{
    int start =0;
    int end =n-1;
    int ans;
    int mid = (start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid]>key){
            end = mid -1;
        }
        else if(arr[mid]<key){
            start =mid +1;
        }
        mid = (start+end)/2;
    }
    return ans;
}

    int totalOccurance(int arr[],int n ,int key)
    {
        int first = firstOccurance( arr, n , key);
        int last =  lastOccurance( arr, n , key);

        int total = ( last - first )+1;                            //formula
        return total;
    }
int main()
{
    int arr[8]={2,4,6,8,11,11,11,11};
    firstOccurance( arr, 8 , 11);
    std::cout<<" first Occurance of element 11 : "<<firstOccurance( arr, 8 , 11)<<'\n';

     lastOccurance( arr, 8 , 11);
    std::cout<<" last Occurance of element 11 : "<<lastOccurance( arr, 8 , 11)<<'\n';
    
     totalOccurance( arr, 8 , 11);
    std::cout<<" total Occurance of element 11 : "<<totalOccurance( arr, 8 , 11)<<'\n';
    return 0;

   
  
}
