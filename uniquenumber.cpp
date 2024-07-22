#include<iostream>
int uniquenum(int arr[],int size)
{
    int ans =0;
    for(int i =0;i<size;i++){
        ans  = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int array[7]={1,1,2,2,3,3,4};
    std::cout<<uniquenum(array,7);
}