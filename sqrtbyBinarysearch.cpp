#include<iostream>                    //to find square root of an element in array by binarysearch.
int BinarySearch(int arr[],int n,int num)
{
    int s =0;
    int e=n;
    int mid =s+(e-s)/2;
    int ans;
    
   
    while(s<=e)
    {
         int square = mid*mid;

        if(square==num){
               return mid ;
        }
        else if(square<num)
        {
            ans=mid;
            s =mid+1;
        }
        else if(square>num){
            e=mid-1;
        }
        mid =s+(e-s)/2;

    }
    return ans;
}

int main()
{
   int arr[]={1,2,3,4,5,6,7,8,910,11,12,13,14,15,16};
    int num;
    std::cout<<"Enter the number you want to find the square root : \n";
    std::cin>>num;
    std::cout<<"The square root of the number is : "<<BinarySearch( arr, 16, num);
}
