#include<iostream>
#include<vector>
  
int intersection(std::vector<int> & arr1 ,int n,std::vector<int> & arr2 ,int m){
     std::vector<int> ans;
    for(int i =0 ;i<n;i++){
        int element = arr1[i];
        for(int j = 0;j<m;j++){
            if(element == arr2[j]){
                ans.push_back(arr2[j]);
                arr2[j]=-423432;
                break;

            }
        }
        
    }
   
  return ans;
}