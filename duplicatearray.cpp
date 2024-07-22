//Q.Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or
// twice, return an array of all the integers that appears twice.

#include<iostream> 
#include<vector>

int duplicate(std::vector<int> & arr)
{
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        ans = ans^arr[i];
    }
    for(int i=1;i<arr.size();i++){
        ans = ans^i;
    }
    return ans;
}
int main()
{ 
  std::vector<int>v = {1,2,3,3,4,5};
  std::cout<<duplicate(v);
  
}