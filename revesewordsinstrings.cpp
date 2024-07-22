#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s ={" My name is ayush "};
    
    int start=0;
    int p=0;

    for(int i=0;i<s.length();i++)
    {
         if(s[p]==' ' )
         {
            int end = p-1;
            while(start<=end)   
        {
            swap(s[start],s[end]);
            start++;
            end--;
        }
          start =p+1;
        }
        p++;
    }
    cout<<s;

}