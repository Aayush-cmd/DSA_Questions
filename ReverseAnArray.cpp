#include<iostream>
#include<vector>
using namespace std;

vector<int> reversearray(vector<int> v)
{
    int s = 0;
    int e =v.size()-1;

    while(s<e)
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
        std::cout<<v[i]<<" ";
        
    }
    std::cout<<'\n';
}

int main()
{
    vector<int> v ;
    v.push_back(11);
    v.push_back(7);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);

    vector<int> ans =reversearray(v);
std::cout<<"Reversed array : ";
printarray(ans);


}

 
