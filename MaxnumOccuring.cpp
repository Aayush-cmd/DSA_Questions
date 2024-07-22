#include<iostream>
#include<string>
using namespace std;

char Maxoccuranceofchar(string s)
{
    int arr[26]={0};
 
    int number =0;
    for(int i=0;i<s.size();i++)
    {
        char ch = s[i];

         number = ch -'a';
         arr[number]++;
    }
     

     int maxi=-1;int ans=0;
     for(int i=0;i<26;i++){
     if(maxi <= arr[i])
     {
        ans =i;
        maxi=arr[i];
     }
     }
     return  'a'+ ans; 

}

int main()
{
 string s;
 cin>>s;
 cout<< Maxoccuranceofchar( s);
}