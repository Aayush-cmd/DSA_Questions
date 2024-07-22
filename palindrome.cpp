#include<iostream>
#include<string>
using namespace std;

bool isAlphanumeric(char ch)
{
    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9')
    {
        return 1;
    }
    return 0;
    
}

bool Lowercase(char ch)
{
    if(ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9')
    {
        return ch;
    }
    else{
        char temp = ch -'A' + 'a';
        return temp;
        
    }
 
}

bool checkpalindrome(string a)
{
    int s=0;
    int e=a.length()-1;

    while(s<=e)
    {
        if(a[s] != a[e])
        {
            return 0;
        }
        else{
            s++;
            e--;
        }

    }
    return 1;
}

bool ispalindrome(string s)
{
    string temp ="";

    for(int i=0;i<s.length();i++)
    {
        if(isAlphanumeric(s[i]))
        {
            temp.push_back(s[i]);
        }
    }

    for(int i=0;i<temp.length();i++)
    {
        temp[i] = Lowercase(temp[i]);
    }

    return checkpalindrome(temp);
}


int main()
{
    string temp ={"yrdrfjgfutrdr"};
    cout<<"your string is:"<<temp<<'\n';
    cout<<"Palindrome or not:"<<ispalindrome(temp)<<'\n';
}
