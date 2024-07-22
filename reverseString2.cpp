#include<iostream>
#include<vector>
using namespace std;


void reverserange(vector<char>& s ,int left ,int right)
{
  while(left<right)
    {
        swap(s[left++],s[right--]);                        //reversed the entire array
    }
}

void reverseword(vector<char>& s)
{
    reverserange( s , 0 , s.size()-1);

    int start=0;
    for(int end =0;end<=s.size();++end)
    {
        if(end==s.size()||end==' ')                       //again reversing the words whenever it finds a space till the end of array.
        {
            reverserange(s,start,end-1);

        }
        start =end+1;
    }

}

void print(vector<char>&s)
{
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<' ';
    }
} 
int main()
{
 vector<char> s ={'t', 'h', 'e', ' ', 's', 'k', 'y', ' ', 'i', 's', ' ', 'b', 'l', 'u', 'e'};

 reverseword( s);
 cout<<"ans:";
 print(s);

}