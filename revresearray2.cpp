#include<iostream>
#include<vector>
using namespace std;

vector<int> reversearray(vector<int> &v,int m)
{
    int s =m+1;
    int e =v.size()-1;

    while(s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void printarray(vector<int> v)
{
    for(int i=0;i<=v.size()-1;i++)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{
    vector<int> v ;

    v.push_back(5);
    v.push_back(2);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(4);

     vector<int> ans =reversearray(v,2);
     std::cout<<"Reversed array after mth index : ";
     printarray(ans);
}