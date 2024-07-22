//easiest way to find if a string which is only alphanumeric is palindorme or not.
#include<iostream>
#include<string>
using namespace std;

bool ispalindrome(string a)
{
    int s=0;
    int e=a.length()-1;

    while(s<e){
        while(s<e && ! isalnum(a[s]))                         //isalnum is keyword to check if character is alpha numeric or not
        {
            s++;
        }
        while(s<e && ! isalnum(a[e]))
        {
            e--;
        }

        if(tolower(a[s]) != tolower(a[e]))             //tolower is keyword to check if char is in lower case or not
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

int main()
  {
    string temp;
    cout<<"Enter the string: \n";
    cin>>temp;

    cout<<"Palindrome or not: "<<ispalindrome(temp);

  }
