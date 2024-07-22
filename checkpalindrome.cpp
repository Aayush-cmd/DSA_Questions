#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str,temp;

    int s=0,e;
    

    

    cout<<"Enter the string: \n";
    cin>>str;

    temp=str;
    e=str.length()-1;

    while(s<e)
    { 
        swap(str[s++],str[e--]);


    }

    if(temp==str)
    {
        cout<<"your string is palindrome\n";
        

    }
    else{
         cout<<"your string is not palindrome\n";
    }
    return 0;

}