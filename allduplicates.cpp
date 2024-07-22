#include<iostream>
#include<vector>

int allduplicates(std::vector<int>&arr)
{
   std::vector <int> a  ;
   std::sort(arr.begin(),arr.end());

    int count =1;
    for(int i =0;i<arr.size();i++){
        if(i+1<arr.size()&&arr.at(i)==arr.at(i+1))
        {
            count++;

        }
        if(count==2){
            a.push_back(arr.at(i));
        }
        
        
    }
  
 
}
int main()
{
    std::vector<int> v={1,2,3,3,2,4};
    std::cout<<allduplicates(v);
}