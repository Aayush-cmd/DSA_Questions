#include<iostream>
bool isPossible(int arr[],int n,int m,int mid)
{
    int studCount =1;
    int pageSum =0;
    for(int i =0;i<n;i++){
        if(arr[i]+pageSum <= mid ){
            pageSum+=arr[i];
        }
        else {
           studCount++;
           if(studCount>mid ||arr[i]>mid)
           {
            return false;
           }
           pageSum=arr[i];
        }
        
    }
    return true;

}
int bookAllocation(int arr[],int n,int m)
{

    int start=0;
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    int end = sum ;

    int mid=start+(end-start)/2;
    int ans=-1;


    while(start<=end)
    {
        if(isPossible(arr,n,m,mid)){
            ans =mid;
            end =mid-1;
        }
        else{
            start =mid+1;
        }
        if(m>n){
            return -1;
        }
        mid=start+(end-start)/2;
        
    }
    return ans;
}

int main()
{
    int n;
    int m;
    int arr[]={10,20,30,40};

   int answer=bookAllocation(arr,4,2 );
   std::cout<<answer;
}