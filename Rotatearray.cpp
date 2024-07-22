#include<iostream>
#include<vector>
using namespace std;

void rotateArray (vector<int>&arr,int k)
{
    vector<int> temp(arr.size());
    for(int i=0;i<arr.size();i++)
    {
        temp[(i+k) % arr.size() ] = arr[i];

    }
    arr =temp;

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
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    rotateArray (v,3);
     std::cout<<"resulting array: ";
     print(v);


}