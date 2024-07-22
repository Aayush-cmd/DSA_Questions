#include<iostream>
using namespace std;
int lengthofstring(char name[])
{
    int count=0;

    for(int i=0;name[i]!='0';i++)
    {
        count++;
    }

    return count;

}

void reversestring(char name[],int n)
{ 
    int s=0;
    int e=n-1;

    while(s<e)
    
    {
        swap(name[s++],name[e++]);
    }

}



int main()
{  
    char name[20];
    cout<<"Enter your name\n";
    cin>>name;

     int len = lengthofstring(name);
     cout<<"Length of your name:\n";
     cin>>len;

    reversestring(name, len);
    cout<<"your name reversed would look like:\n";
    cin>>name;
    

}