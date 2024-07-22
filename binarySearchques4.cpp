//ques4. Search in rotated array

#include<iostream>             

int pivotElement(int arr[] , int k,int n)
{
    int s = 0;
    int e=n-1;
    int mid = (s+e)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s =mid+1;
        }
        else{
            e=mid;
        }
        mid = (s+e)/2;
    }
    return s;
}

int binarySearch(int arr[],int s ,int e,int k)
{
    int start =s;
    int end =e;
    int mid =(s+e)/2;

    while(s<=e)
    {
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(arr[mid]<k)
        {
            s =mid+1;
        }
        else{
            e=mid-1;
        }
        mid =(s+e)/2;
    }
    return -1;
}

int rotatedArraySearch(int arr[],int n ,int k)
{
    int pivot = pivotElement(arr,n,k); 

     if(k >= arr[pivot] && k<=arr[n-1]){
            return binarySearch(arr,pivot,n-1,k);
     }
     else{
         return binarySearch(arr,0,pivot-1,k);
     }
}

int main()
{
    int arr[5]={7,9,1,2,3};
    std::cout<<"Element is present at position: "<<rotatedArraySearch( arr, 5 , 3);
}

