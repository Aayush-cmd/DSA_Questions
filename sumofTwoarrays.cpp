#include<iostream>
#include<vector>
using namespace std;
vector<int> reversearray(vector<int>arr3)
{
    int s =0;
    int e =arr3.size()-1;

    while(s<e){
        swap(arr3[s],arr3[e]);
        s++;
        e--;
       
    }
    return arr3;
}
void print(vector<int>n,int arr3)
{
    for(int i =0;i<n.size();i++)
    {
        std::cout<<arr3<<" ";
    }
}


vector<int> Sumoftwoarrays(vector<int>&arr1 ,int n,vector<int>&arr2 ,int m)
{
    int i=n-1;
    int j= m-1;
    int carry =0;
    int sum =0;

    vector<int> ans;

    while(i>=0 && j>=0)
    {
        int val1 = arr1[i];
        int val2 = arr2[j];
        int carry =sum/10;
        int sum =sum%10;

         sum = val1+val2+carry;

        ans.push_back(sum);
        i--;
        j--;
    }

       while(i>=0)
    {
        int val1 = arr1[i];
       
        int carry =sum/10;
        int sum =sum%10;

         sum = arr1[i]+carry;

        ans.push_back(sum);
        i--;
       
    }
    while(j>=0)
    {
        int val2 = arr2[j];
       
        int carry =sum/10;
        int sum =sum%10;

        sum = arr2[j]+carry;

        ans.push_back(sum);
        j--;
       
    }

    while(carry!=0)
    { 
        carry =sum ;
        int carry =sum/10;
        int sum =sum%10;
        ans.push_back(sum);
    } 
    return   reversearray(ans);
}

int main()
{
    int ar[4]={1,2,3,4};
    int arr[1]={9};
    int arre[4]={};
    Sumoftwoarrays(ar,4,arr, 1);
    print(4, arre);
       
    }

