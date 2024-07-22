#include<iostream>                 // leetcode Q.283 
#include<vector>
using namespace std;

void movezero(vector<int> & arr)
{
    int nonZero =0 ;                                // 1st nonzero value should be at index 0

    for(int j=0;j<arr.size();j++)
    {
      if(arr[j]!=0)
      {
        swap(arr[j],arr[nonZero]);
        nonZero++;
      }
    }                       
    
}

void print(vector<int>&arr)
{
    for(int i=0;i<arr.size();i++)
    {
        std::cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(3);
    v.push_back(0);
    v.push_back(4);


     movezero(v );
     std::cout<<"resulting array: ";
     print(v);


}