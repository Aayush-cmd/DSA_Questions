#include<iostream>
int peakIndexInMountainArray(int arr[],int n)                           //Q.852 leetcode .
{
    int s = 0 ;
    int e = n-1;
    int mid = s+(e-s)/2;

    while(s<e){
        if(arr[mid]<arr[mid+1])
        {
            s =mid+1;
        }
        else 
        {
            e= mid;
        }
     mid = s+(e-s)/2;

    }
    return s;

}
int main()
{
  int arr[4] ={0,1,2,0};


  std::cout<<"Index of the element at the peak of this mountain array is: "<<peakIndexInMountainArray( arr, 4);
  return 0; 


}